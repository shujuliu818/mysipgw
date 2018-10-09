/* sipgwStub.h
   Generated by gSOAP 2.8.70 for sipgwSvr.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/


#ifndef sipgwStub_H
#define sipgwStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20870
# error "GSOAP VERSION 20870 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

struct ns2__loginResponse;	/* sipgwSvr.h:15 */
struct ns2__login;	/* sipgwSvr.h:15 */
struct ns2__logoutResponse;	/* sipgwSvr.h:16 */
struct ns2__logout;	/* sipgwSvr.h:16 */
struct ns2__keepaliveResponse;	/* sipgwSvr.h:17 */
struct ns2__keepalive;	/* sipgwSvr.h:17 */
struct ns2__get_directory_infoResponse;	/* sipgwSvr.h:19 */
struct ns2__get_directory_info;	/* sipgwSvr.h:19 */
struct ns2__ptz_controlResponse;	/* sipgwSvr.h:20 */
struct ns2__ptz_control;	/* sipgwSvr.h:20 */
struct ns2__start_real_playResponse;	/* sipgwSvr.h:22 */
struct ns2__start_real_play;	/* sipgwSvr.h:22 */
struct ns2__stop_real_playResponse;	/* sipgwSvr.h:23 */
struct ns2__stop_real_play;	/* sipgwSvr.h:23 */
struct ns2__start_play_backResponse;	/* sipgwSvr.h:25 */
struct ns2__start_play_back;	/* sipgwSvr.h:25 */
struct ns2__stop_play_backResponse;	/* sipgwSvr.h:26 */
struct ns2__stop_play_back;	/* sipgwSvr.h:26 */
struct ns2__pause_play_backResponse;	/* sipgwSvr.h:28 */
struct ns2__pause_play_back;	/* sipgwSvr.h:28 */
struct ns2__restart_play_backResponse;	/* sipgwSvr.h:29 */
struct ns2__restart_play_back;	/* sipgwSvr.h:29 */

/* sipgwSvr.h:15 */
#ifndef SOAP_TYPE_ns2__loginResponse
#define SOAP_TYPE_ns2__loginResponse (9)
/* complex XSD type 'ns2:loginResponse': */
struct SOAP_CMAC ns2__loginResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__loginResponse */
        long soap_type() const { return SOAP_TYPE_ns2__loginResponse; }
        /** Constructor with member initializations */
        ns2__loginResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__loginResponse * SOAP_FMAC2 sipgw_instantiate_ns2__loginResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:15 */
#ifndef SOAP_TYPE_ns2__login
#define SOAP_TYPE_ns2__login (10)
/* complex XSD type 'ns2:login': */
struct SOAP_CMAC ns2__login {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'password' of XSD type 'xsd:string' */
        char *password;
      public:
        /** Return unique type id SOAP_TYPE_ns2__login */
        long soap_type() const { return SOAP_TYPE_ns2__login; }
        /** Constructor with member initializations */
        ns2__login() : user_id(), password() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__login * SOAP_FMAC2 sipgw_instantiate_ns2__login(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:16 */
#ifndef SOAP_TYPE_ns2__logoutResponse
#define SOAP_TYPE_ns2__logoutResponse (12)
/* complex XSD type 'ns2:logoutResponse': */
struct SOAP_CMAC ns2__logoutResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__logoutResponse */
        long soap_type() const { return SOAP_TYPE_ns2__logoutResponse; }
        /** Constructor with member initializations */
        ns2__logoutResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__logoutResponse * SOAP_FMAC2 sipgw_instantiate_ns2__logoutResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:16 */
#ifndef SOAP_TYPE_ns2__logout
#define SOAP_TYPE_ns2__logout (13)
/* complex XSD type 'ns2:logout': */
struct SOAP_CMAC ns2__logout {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'password' of XSD type 'xsd:string' */
        char *password;
      public:
        /** Return unique type id SOAP_TYPE_ns2__logout */
        long soap_type() const { return SOAP_TYPE_ns2__logout; }
        /** Constructor with member initializations */
        ns2__logout() : user_id(), password() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__logout * SOAP_FMAC2 sipgw_instantiate_ns2__logout(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:17 */
#ifndef SOAP_TYPE_ns2__keepaliveResponse
#define SOAP_TYPE_ns2__keepaliveResponse (15)
/* complex XSD type 'ns2:keepaliveResponse': */
struct SOAP_CMAC ns2__keepaliveResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__keepaliveResponse */
        long soap_type() const { return SOAP_TYPE_ns2__keepaliveResponse; }
        /** Constructor with member initializations */
        ns2__keepaliveResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__keepaliveResponse * SOAP_FMAC2 sipgw_instantiate_ns2__keepaliveResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:17 */
#ifndef SOAP_TYPE_ns2__keepalive
#define SOAP_TYPE_ns2__keepalive (16)
/* complex XSD type 'ns2:keepalive': */
struct SOAP_CMAC ns2__keepalive {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'password' of XSD type 'xsd:string' */
        char *password;
      public:
        /** Return unique type id SOAP_TYPE_ns2__keepalive */
        long soap_type() const { return SOAP_TYPE_ns2__keepalive; }
        /** Constructor with member initializations */
        ns2__keepalive() : user_id(), password() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__keepalive * SOAP_FMAC2 sipgw_instantiate_ns2__keepalive(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:19 */
#ifndef SOAP_TYPE_ns2__get_directory_infoResponse
#define SOAP_TYPE_ns2__get_directory_infoResponse (19)
/* complex XSD type 'ns2:get-directory-infoResponse': */
struct SOAP_CMAC ns2__get_directory_infoResponse {
      public:
        /** Optional element 'directory-info-buf-out' of XSD type 'xsd:string' */
        char **directory_info_buf_out;
      public:
        /** Return unique type id SOAP_TYPE_ns2__get_directory_infoResponse */
        long soap_type() const { return SOAP_TYPE_ns2__get_directory_infoResponse; }
        /** Constructor with member initializations */
        ns2__get_directory_infoResponse() : directory_info_buf_out() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__get_directory_infoResponse * SOAP_FMAC2 sipgw_instantiate_ns2__get_directory_infoResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:19 */
#ifndef SOAP_TYPE_ns2__get_directory_info
#define SOAP_TYPE_ns2__get_directory_info (20)
/* complex XSD type 'ns2:get-directory-info': */
struct SOAP_CMAC ns2__get_directory_info {
      public:
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
      public:
        /** Return unique type id SOAP_TYPE_ns2__get_directory_info */
        long soap_type() const { return SOAP_TYPE_ns2__get_directory_info; }
        /** Constructor with member initializations */
        ns2__get_directory_info() : target_dev_id(), target_realm() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__get_directory_info * SOAP_FMAC2 sipgw_instantiate_ns2__get_directory_info(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:20 */
#ifndef SOAP_TYPE_ns2__ptz_controlResponse
#define SOAP_TYPE_ns2__ptz_controlResponse (22)
/* complex XSD type 'ns2:ptz-controlResponse': */
struct SOAP_CMAC ns2__ptz_controlResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__ptz_controlResponse */
        long soap_type() const { return SOAP_TYPE_ns2__ptz_controlResponse; }
        /** Constructor with member initializations */
        ns2__ptz_controlResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__ptz_controlResponse * SOAP_FMAC2 sipgw_instantiate_ns2__ptz_controlResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:20 */
#ifndef SOAP_TYPE_ns2__ptz_control
#define SOAP_TYPE_ns2__ptz_control (23)
/* complex XSD type 'ns2:ptz-control': */
struct SOAP_CMAC ns2__ptz_control {
      public:
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Required element 'ptz' of XSD type 'xsd:int' */
        int ptz;
        /** Required element 'ptz-speed' of XSD type 'xsd:int' */
        int ptz_speed;
      public:
        /** Return unique type id SOAP_TYPE_ns2__ptz_control */
        long soap_type() const { return SOAP_TYPE_ns2__ptz_control; }
        /** Constructor with member initializations */
        ns2__ptz_control() : target_dev_id(), target_realm(), ptz(), ptz_speed() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__ptz_control * SOAP_FMAC2 sipgw_instantiate_ns2__ptz_control(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:22 */
#ifndef SOAP_TYPE_ns2__start_real_playResponse
#define SOAP_TYPE_ns2__start_real_playResponse (25)
/* complex XSD type 'ns2:start-real-playResponse': */
struct SOAP_CMAC ns2__start_real_playResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__start_real_playResponse */
        long soap_type() const { return SOAP_TYPE_ns2__start_real_playResponse; }
        /** Constructor with member initializations */
        ns2__start_real_playResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__start_real_playResponse * SOAP_FMAC2 sipgw_instantiate_ns2__start_real_playResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:22 */
#ifndef SOAP_TYPE_ns2__start_real_play
#define SOAP_TYPE_ns2__start_real_play (26)
/* complex XSD type 'ns2:start-real-play': */
struct SOAP_CMAC ns2__start_real_play {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Optional element 'media-recv-ip' of XSD type 'xsd:string' */
        char *media_recv_ip;
        /** Required element 'media-recv-port' of XSD type 'xsd:int' */
        int media_recv_port;
      public:
        /** Return unique type id SOAP_TYPE_ns2__start_real_play */
        long soap_type() const { return SOAP_TYPE_ns2__start_real_play; }
        /** Constructor with member initializations */
        ns2__start_real_play() : user_id(), target_dev_id(), target_realm(), media_recv_ip(), media_recv_port() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__start_real_play * SOAP_FMAC2 sipgw_instantiate_ns2__start_real_play(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:23 */
#ifndef SOAP_TYPE_ns2__stop_real_playResponse
#define SOAP_TYPE_ns2__stop_real_playResponse (28)
/* complex XSD type 'ns2:stop-real-playResponse': */
struct SOAP_CMAC ns2__stop_real_playResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__stop_real_playResponse */
        long soap_type() const { return SOAP_TYPE_ns2__stop_real_playResponse; }
        /** Constructor with member initializations */
        ns2__stop_real_playResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__stop_real_playResponse * SOAP_FMAC2 sipgw_instantiate_ns2__stop_real_playResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:23 */
#ifndef SOAP_TYPE_ns2__stop_real_play
#define SOAP_TYPE_ns2__stop_real_play (29)
/* complex XSD type 'ns2:stop-real-play': */
struct SOAP_CMAC ns2__stop_real_play {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Optional element 'media-recv-ip' of XSD type 'xsd:string' */
        char *media_recv_ip;
        /** Required element 'media-recv-port' of XSD type 'xsd:int' */
        int media_recv_port;
      public:
        /** Return unique type id SOAP_TYPE_ns2__stop_real_play */
        long soap_type() const { return SOAP_TYPE_ns2__stop_real_play; }
        /** Constructor with member initializations */
        ns2__stop_real_play() : user_id(), target_dev_id(), target_realm(), media_recv_ip(), media_recv_port() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__stop_real_play * SOAP_FMAC2 sipgw_instantiate_ns2__stop_real_play(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:25 */
#ifndef SOAP_TYPE_ns2__start_play_backResponse
#define SOAP_TYPE_ns2__start_play_backResponse (31)
/* complex XSD type 'ns2:start-play-backResponse': */
struct SOAP_CMAC ns2__start_play_backResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__start_play_backResponse */
        long soap_type() const { return SOAP_TYPE_ns2__start_play_backResponse; }
        /** Constructor with member initializations */
        ns2__start_play_backResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__start_play_backResponse * SOAP_FMAC2 sipgw_instantiate_ns2__start_play_backResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:25 */
#ifndef SOAP_TYPE_ns2__start_play_back
#define SOAP_TYPE_ns2__start_play_back (32)
/* complex XSD type 'ns2:start-play-back': */
struct SOAP_CMAC ns2__start_play_back {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Optional element 'media-recv-ip' of XSD type 'xsd:string' */
        char *media_recv_ip;
        /** Required element 'media-recv-port' of XSD type 'xsd:int' */
        int media_recv_port;
        /** Optional element 'start-time' of XSD type 'xsd:string' */
        char *start_time;
        /** Optional element 'end-time' of XSD type 'xsd:string' */
        char *end_time;
      public:
        /** Return unique type id SOAP_TYPE_ns2__start_play_back */
        long soap_type() const { return SOAP_TYPE_ns2__start_play_back; }
        /** Constructor with member initializations */
        ns2__start_play_back() : user_id(), target_dev_id(), target_realm(), media_recv_ip(), media_recv_port(), start_time(), end_time() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__start_play_back * SOAP_FMAC2 sipgw_instantiate_ns2__start_play_back(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:26 */
#ifndef SOAP_TYPE_ns2__stop_play_backResponse
#define SOAP_TYPE_ns2__stop_play_backResponse (34)
/* complex XSD type 'ns2:stop-play-backResponse': */
struct SOAP_CMAC ns2__stop_play_backResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__stop_play_backResponse */
        long soap_type() const { return SOAP_TYPE_ns2__stop_play_backResponse; }
        /** Constructor with member initializations */
        ns2__stop_play_backResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__stop_play_backResponse * SOAP_FMAC2 sipgw_instantiate_ns2__stop_play_backResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:26 */
#ifndef SOAP_TYPE_ns2__stop_play_back
#define SOAP_TYPE_ns2__stop_play_back (35)
/* complex XSD type 'ns2:stop-play-back': */
struct SOAP_CMAC ns2__stop_play_back {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Optional element 'media-recv-ip' of XSD type 'xsd:string' */
        char *media_recv_ip;
        /** Required element 'media-recv-port' of XSD type 'xsd:int' */
        int media_recv_port;
        /** Optional element 'start-time' of XSD type 'xsd:string' */
        char *start_time;
        /** Optional element 'end-time' of XSD type 'xsd:string' */
        char *end_time;
      public:
        /** Return unique type id SOAP_TYPE_ns2__stop_play_back */
        long soap_type() const { return SOAP_TYPE_ns2__stop_play_back; }
        /** Constructor with member initializations */
        ns2__stop_play_back() : user_id(), target_dev_id(), target_realm(), media_recv_ip(), media_recv_port(), start_time(), end_time() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__stop_play_back * SOAP_FMAC2 sipgw_instantiate_ns2__stop_play_back(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:28 */
#ifndef SOAP_TYPE_ns2__pause_play_backResponse
#define SOAP_TYPE_ns2__pause_play_backResponse (37)
/* complex XSD type 'ns2:pause-play-backResponse': */
struct SOAP_CMAC ns2__pause_play_backResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__pause_play_backResponse */
        long soap_type() const { return SOAP_TYPE_ns2__pause_play_backResponse; }
        /** Constructor with member initializations */
        ns2__pause_play_backResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__pause_play_backResponse * SOAP_FMAC2 sipgw_instantiate_ns2__pause_play_backResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:28 */
#ifndef SOAP_TYPE_ns2__pause_play_back
#define SOAP_TYPE_ns2__pause_play_back (38)
/* complex XSD type 'ns2:pause-play-back': */
struct SOAP_CMAC ns2__pause_play_back {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Optional element 'media-recv-ip' of XSD type 'xsd:string' */
        char *media_recv_ip;
        /** Required element 'media-recv-port' of XSD type 'xsd:int' */
        int media_recv_port;
      public:
        /** Return unique type id SOAP_TYPE_ns2__pause_play_back */
        long soap_type() const { return SOAP_TYPE_ns2__pause_play_back; }
        /** Constructor with member initializations */
        ns2__pause_play_back() : user_id(), target_dev_id(), target_realm(), media_recv_ip(), media_recv_port() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__pause_play_back * SOAP_FMAC2 sipgw_instantiate_ns2__pause_play_back(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:29 */
#ifndef SOAP_TYPE_ns2__restart_play_backResponse
#define SOAP_TYPE_ns2__restart_play_backResponse (40)
/* complex XSD type 'ns2:restart-play-backResponse': */
struct SOAP_CMAC ns2__restart_play_backResponse {
      public:
        /** Required element 'result' of XSD type 'xsd:int' */
        int result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__restart_play_backResponse */
        long soap_type() const { return SOAP_TYPE_ns2__restart_play_backResponse; }
        /** Constructor with member initializations */
        ns2__restart_play_backResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__restart_play_backResponse * SOAP_FMAC2 sipgw_instantiate_ns2__restart_play_backResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:29 */
#ifndef SOAP_TYPE_ns2__restart_play_back
#define SOAP_TYPE_ns2__restart_play_back (41)
/* complex XSD type 'ns2:restart-play-back': */
struct SOAP_CMAC ns2__restart_play_back {
      public:
        /** Optional element 'user-id' of XSD type 'xsd:string' */
        char *user_id;
        /** Optional element 'target-dev-id' of XSD type 'xsd:string' */
        char *target_dev_id;
        /** Optional element 'target-realm' of XSD type 'xsd:string' */
        char *target_realm;
        /** Optional element 'media-recv-ip' of XSD type 'xsd:string' */
        char *media_recv_ip;
        /** Required element 'media-recv-port' of XSD type 'xsd:int' */
        int media_recv_port;
      public:
        /** Return unique type id SOAP_TYPE_ns2__restart_play_back */
        long soap_type() const { return SOAP_TYPE_ns2__restart_play_back; }
        /** Constructor with member initializations */
        ns2__restart_play_back() : user_id(), target_dev_id(), target_realm(), media_recv_ip(), media_recv_port() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns2__restart_play_back * SOAP_FMAC2 sipgw_instantiate_ns2__restart_play_back(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* sipgwSvr.h:30 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (42)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 sipgw_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* sipgwSvr.h:30 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (43)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 sipgw_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* sipgwSvr.h:30 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (45)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 sipgw_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* sipgwSvr.h:30 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (48)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 sipgw_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* sipgwSvr.h:30 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (49)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 sipgw_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (49)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (48)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (45)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (43)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (42)
#endif

/* struct ns2__restart_play_back has binding name 'ns2__restart_play_back' for type 'ns2:restart-play-back' */
#ifndef SOAP_TYPE_ns2__restart_play_back
#define SOAP_TYPE_ns2__restart_play_back (41)
#endif

/* struct ns2__restart_play_backResponse has binding name 'ns2__restart_play_backResponse' for type 'ns2:restart-play-backResponse' */
#ifndef SOAP_TYPE_ns2__restart_play_backResponse
#define SOAP_TYPE_ns2__restart_play_backResponse (40)
#endif

/* struct ns2__pause_play_back has binding name 'ns2__pause_play_back' for type 'ns2:pause-play-back' */
#ifndef SOAP_TYPE_ns2__pause_play_back
#define SOAP_TYPE_ns2__pause_play_back (38)
#endif

/* struct ns2__pause_play_backResponse has binding name 'ns2__pause_play_backResponse' for type 'ns2:pause-play-backResponse' */
#ifndef SOAP_TYPE_ns2__pause_play_backResponse
#define SOAP_TYPE_ns2__pause_play_backResponse (37)
#endif

/* struct ns2__stop_play_back has binding name 'ns2__stop_play_back' for type 'ns2:stop-play-back' */
#ifndef SOAP_TYPE_ns2__stop_play_back
#define SOAP_TYPE_ns2__stop_play_back (35)
#endif

/* struct ns2__stop_play_backResponse has binding name 'ns2__stop_play_backResponse' for type 'ns2:stop-play-backResponse' */
#ifndef SOAP_TYPE_ns2__stop_play_backResponse
#define SOAP_TYPE_ns2__stop_play_backResponse (34)
#endif

/* struct ns2__start_play_back has binding name 'ns2__start_play_back' for type 'ns2:start-play-back' */
#ifndef SOAP_TYPE_ns2__start_play_back
#define SOAP_TYPE_ns2__start_play_back (32)
#endif

/* struct ns2__start_play_backResponse has binding name 'ns2__start_play_backResponse' for type 'ns2:start-play-backResponse' */
#ifndef SOAP_TYPE_ns2__start_play_backResponse
#define SOAP_TYPE_ns2__start_play_backResponse (31)
#endif

/* struct ns2__stop_real_play has binding name 'ns2__stop_real_play' for type 'ns2:stop-real-play' */
#ifndef SOAP_TYPE_ns2__stop_real_play
#define SOAP_TYPE_ns2__stop_real_play (29)
#endif

/* struct ns2__stop_real_playResponse has binding name 'ns2__stop_real_playResponse' for type 'ns2:stop-real-playResponse' */
#ifndef SOAP_TYPE_ns2__stop_real_playResponse
#define SOAP_TYPE_ns2__stop_real_playResponse (28)
#endif

/* struct ns2__start_real_play has binding name 'ns2__start_real_play' for type 'ns2:start-real-play' */
#ifndef SOAP_TYPE_ns2__start_real_play
#define SOAP_TYPE_ns2__start_real_play (26)
#endif

/* struct ns2__start_real_playResponse has binding name 'ns2__start_real_playResponse' for type 'ns2:start-real-playResponse' */
#ifndef SOAP_TYPE_ns2__start_real_playResponse
#define SOAP_TYPE_ns2__start_real_playResponse (25)
#endif

/* struct ns2__ptz_control has binding name 'ns2__ptz_control' for type 'ns2:ptz-control' */
#ifndef SOAP_TYPE_ns2__ptz_control
#define SOAP_TYPE_ns2__ptz_control (23)
#endif

/* struct ns2__ptz_controlResponse has binding name 'ns2__ptz_controlResponse' for type 'ns2:ptz-controlResponse' */
#ifndef SOAP_TYPE_ns2__ptz_controlResponse
#define SOAP_TYPE_ns2__ptz_controlResponse (22)
#endif

/* struct ns2__get_directory_info has binding name 'ns2__get_directory_info' for type 'ns2:get-directory-info' */
#ifndef SOAP_TYPE_ns2__get_directory_info
#define SOAP_TYPE_ns2__get_directory_info (20)
#endif

/* struct ns2__get_directory_infoResponse has binding name 'ns2__get_directory_infoResponse' for type 'ns2:get-directory-infoResponse' */
#ifndef SOAP_TYPE_ns2__get_directory_infoResponse
#define SOAP_TYPE_ns2__get_directory_infoResponse (19)
#endif

/* struct ns2__keepalive has binding name 'ns2__keepalive' for type 'ns2:keepalive' */
#ifndef SOAP_TYPE_ns2__keepalive
#define SOAP_TYPE_ns2__keepalive (16)
#endif

/* struct ns2__keepaliveResponse has binding name 'ns2__keepaliveResponse' for type 'ns2:keepaliveResponse' */
#ifndef SOAP_TYPE_ns2__keepaliveResponse
#define SOAP_TYPE_ns2__keepaliveResponse (15)
#endif

/* struct ns2__logout has binding name 'ns2__logout' for type 'ns2:logout' */
#ifndef SOAP_TYPE_ns2__logout
#define SOAP_TYPE_ns2__logout (13)
#endif

/* struct ns2__logoutResponse has binding name 'ns2__logoutResponse' for type 'ns2:logoutResponse' */
#ifndef SOAP_TYPE_ns2__logoutResponse
#define SOAP_TYPE_ns2__logoutResponse (12)
#endif

/* struct ns2__login has binding name 'ns2__login' for type 'ns2:login' */
#ifndef SOAP_TYPE_ns2__login
#define SOAP_TYPE_ns2__login (10)
#endif

/* struct ns2__loginResponse has binding name 'ns2__loginResponse' for type 'ns2:loginResponse' */
#ifndef SOAP_TYPE_ns2__loginResponse
#define SOAP_TYPE_ns2__loginResponse (9)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (51)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (50)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (44)
#endif

/* char ** has binding name 'PointerTostring' for type 'xsd:string' */
#ifndef SOAP_TYPE_PointerTostring
#define SOAP_TYPE_PointerTostring (17)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of sipgwStub.h */
