
/*
 * Copyright 2022 Shenzhen ZhiLiu Technology Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
/* Code generated by `./gen_wasm_host_api.py src/http`. DO NOT EDIT. */
#ifndef NGX_HTTP_WASM_API_DEF_H
#define NGX_HTTP_WASM_API_DEF_H


#include <ngx_core.h>


#define DEFINE_WASM_API_ARG_VOID void
#define DEFINE_WASM_API_ARG_I32_1 \
    int32_t
#define DEFINE_WASM_API_ARG_I32_2 \
    int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_3 \
    int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_4 \
    int32_t, int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_5 \
    int32_t, int32_t, int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_6 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_7 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_8 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_9 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, \
    int32_t
#define DEFINE_WASM_API_ARG_I32_10 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, \
    int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_11 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, \
    int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_12 \
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, \
    int32_t, int32_t, int32_t, int32_t
#define DEFINE_WASM_API_ARG_I32_I64 \
    int32_t, int64_t

int32_t proxy_set_effective_context(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_get_property(DEFINE_WASM_API_ARG_I32_4);
int32_t proxy_set_property(DEFINE_WASM_API_ARG_I32_4);
int32_t proxy_log(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_get_buffer_bytes(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_set_buffer_bytes(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_send_local_response(DEFINE_WASM_API_ARG_I32_8);
int32_t proxy_send_http_response(DEFINE_WASM_API_ARG_I32_8);
int32_t proxy_get_current_time_nanoseconds(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_set_tick_period_milliseconds(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_get_configuration(DEFINE_WASM_API_ARG_I32_2);
int32_t proxy_get_header_map_pairs(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_set_header_map_pairs(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_get_header_map_value(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_remove_header_map_value(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_replace_header_map_value(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_add_header_map_value(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_get_shared_data(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_set_shared_data(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_register_shared_queue(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_resolve_shared_queue(DEFINE_WASM_API_ARG_I32_5);
int32_t proxy_dequeue_shared_queue(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_enqueue_shared_queue(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_continue_request(DEFINE_WASM_API_ARG_VOID);
int32_t proxy_continue_response(DEFINE_WASM_API_ARG_VOID);
int32_t proxy_clear_route_cache(DEFINE_WASM_API_ARG_VOID);
int32_t proxy_continue_stream(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_close_stream(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_http_call(DEFINE_WASM_API_ARG_I32_10);
int32_t proxy_grpc_call(DEFINE_WASM_API_ARG_I32_12);
int32_t proxy_grpc_stream(DEFINE_WASM_API_ARG_I32_9);
int32_t proxy_grpc_send(DEFINE_WASM_API_ARG_I32_4);
int32_t proxy_grpc_cancel(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_grpc_close(DEFINE_WASM_API_ARG_I32_1);
int32_t proxy_get_status(DEFINE_WASM_API_ARG_I32_3);
int32_t proxy_done(DEFINE_WASM_API_ARG_VOID);
int32_t proxy_call_foreign_function(DEFINE_WASM_API_ARG_I32_6);
int32_t proxy_define_metric(DEFINE_WASM_API_ARG_I32_4);
int32_t proxy_increment_metric(DEFINE_WASM_API_ARG_I32_I64);
int32_t proxy_record_metric(DEFINE_WASM_API_ARG_I32_I64);
int32_t proxy_get_metric(DEFINE_WASM_API_ARG_I32_I64);



#endif
