#include "bst_webservice.h"
#include "utils/myfifo.h"
#include "inside_message/message.h"
#include "dlogger/dlogger.h"
#include "utils/tools.h"

using namespace dlogger;

rand_generator* CSipgwSvr::m_rand_creator = new rand_generator();

int http_get(struct soap *soap)
{
    FILE *fd;
    char *s = strrchr(soap->path, '/'); // soap->path has the URL path (soap->endpoint has the full URL)
    char *respose_message = "method not supported\n if you want get wsdl file. please input:"
                            "\n\"http://bst_sipgw_server:9800/SipGwServer?wsdl\" "
                            "\nin your web browser.";
    if (!s || strcmp(s, "/SipGwServer?wsdl"))
    {
        //return SOAP_GET_METHOD; // GET method not supported
        soap_send_raw(soap, respose_message, strlen(respose_message));
        return SOAP_OK;
    }

    fd = fopen("sipgw.wsdl", "rb"); // open WSDL file to copy as a response

    if (!fd)
    {
        return 404; // return HTTP 404 not found
    }

    soap->http_content = "text/xml; charset=utf-8"; // HTTP header with text/xml content
    soap_response(soap, SOAP_FILE);
    for (;;)
    {
        size_t r = fread(soap->tmpbuf, 1, sizeof(soap->tmpbuf), fd);
        if (!r || soap_send_raw(soap, soap->tmpbuf, r))
            break;
    }
    fclose(fd);
    soap_end_send(soap);
    return SOAP_OK;
}

void *process_request(void *arg)
{
	sipgwService *service = (sipgwService*)arg;

//	THREAD_DETACH(THREAD_ID);
	if (service)
	{
		service->serve();
		service->destroy(); /* clean up */
		delete service;
	}
	return NULL;
}

CSipgwSvr::CSipgwSvr(struct soap *obj)
    :sipgwService(obj)
{
    memset(m_ip, 0x00, 16);
}

CSipgwSvr::CSipgwSvr()
{
	this->soap = soap_new();
	this->soap_own = true;
    (this->soap)->fget = http_get;
    //sipgwService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	CSipgwSvr(this->soap);
}

CSipgwSvr::~CSipgwSvr()
{
	soap_stream_fault(std::cerr);
	destroy();
}

CSipgwSvr *CSipgwSvr::copy()
{
    CSipgwSvr *dup = SOAP_NEW_UNMANAGED(CSipgwSvr);
    if (dup)
    {
        soap_done(dup->soap);
        soap_copy_context(dup->soap, this->soap);
    }
    return dup;
}

int CSipgwSvr::startup()
{
    soap->send_timeout = soap->recv_timeout = 5; /* 5 sec socket idle timeout */
	soap->transfer_timeout = 30; 

    if(!get_ip((char*)"ens33", m_ip))
    {
        LOG("get server ip failure.\n");
        exit(-1);
    }

	SOAP_SOCKET m = bind(m_ip, 9800, 100);

	if (soap_valid_socket(m))
	{
		while (soap_valid_socket(accept()))
		{
			pthread_t tid;
			void *arg = (void*)copy();
			/* use updated THREAD_CREATE from plugin/threads.h https://www.genivia.com/files/threads.zip */
			if (arg)
			{
				while (THREAD_CREATE(&tid, (void*(*)(void*))process_request, arg))
				{
					sleep(1);
				}
			}
		}
	}
    else
    {
        return -1;
    }
    return 0;
}

int CSipgwSvr::login(char *user_id, char *password, char **result)
{
    return SOAP_OK;
}

int CSipgwSvr::logout(char *user_id, char *password, char **result)
{
    return SOAP_OK;
}
int CSipgwSvr::keepalive(char *user_id, char *password, char **result)
{
    return SOAP_OK;
}

int CSipgwSvr::get_directory_info(char *target_dev_id, char *target_realm, char **directory_info_buf_out)
{
	*directory_info_buf_out = "haha";
    return SOAP_OK;
}
int CSipgwSvr::ptz_control(char *target_dev_id, char *target_realm, int ptz, int ptz_speed, char **result)
{
    return SOAP_OK;
}

int CSipgwSvr::start_real_play(char *user_id, char *target_dev_id, char *target_realm, char *media_recv_ip, int media_recv_port, char **call_id)
{
    start_real_play_message *p_message = new start_real_play_message();

    if (30 < strlen(user_id))
    {
        *call_id = "user_id is too long, must less than 30.";
        return SOAP_ERR;
    }

    memcpy(p_message->m_dev_id, target_dev_id, 20);
    memcpy(p_message->m_real, target_realm, 20);
    memcpy(p_message->m_media_recv_ip, media_recv_ip, 16);
    memcpy(p_message->m_user_id, user_id, 20);
    p_message->m_media_recv_port = media_recv_port;
    p_message->m_message_type = (message_type_e)1;

    sprintf(p_message->m_call_id, "%s", user_id);
	
	if(m_rand_creator)
	{
    	m_rand_creator->get_rand_string(p_message->m_call_id + strlen(p_message->m_call_id), 20);
	}
    LOG("\nwebservice receive start real play message:\n"
            "message.device_id = %s\n"
            "message.realm = %s\n"
            "message.receive_ip = %s\n"
            "message.receive_port = %d\n"
            "message.user_id = %s\n",
            p_message->m_dev_id, p_message->m_real, p_message->m_media_recv_ip, p_message->m_media_recv_port, p_message->m_user_id);

    CMyFifo<message_base *>::get_instance()->push(p_message);

    LOG("webservice push start real play message to fifo.\n");

    *call_id = p_message->m_call_id;

    return SOAP_OK;
}
int CSipgwSvr::stop_real_play(char *user_id, char *call_id, char **result)
{
    stop_real_play_message *p_message = new stop_real_play_message();

    if (30 < strlen(user_id) || 70 < strlen(call_id))
    {
        *result = "user_id or call_id is too long, user_id must less than 30, and call_id must less than 70.";
        return SOAP_ERR;
    }

    memcpy(p_message->m_call_id, call_id, strlen(call_id));
    memcpy(p_message->m_user_id, user_id, 20);

    LOG("\nwebservice receive stop real play message:\n"
        "message.call_id = %s\n"
        "message.user_id = %s\n",
        p_message->m_call_id, p_message->m_user_id);

    CMyFifo<message_base *>::get_instance()->push(p_message);

    LOG("webservice push stop real play message to fifo.\n");

    *result = "webservice push stop real play message to fifo.";

    return SOAP_OK;
}

int CSipgwSvr::start_play_back(char *user_id, char *target_dev_id, char *target_realm, char *media_recv_ip, int media_recv_port, char *start_time, char *end_time, char **call_id)
{
    return SOAP_OK;
}
int CSipgwSvr::stop_play_back(char *user_id, char *call_id, char **result)
{
    return SOAP_OK;
}

int CSipgwSvr::call_lookup(char *user_id, char **result)
{
    return SOAP_OK;
}

