#ifndef _JX9_API_H_
#define _JX9_API_H_

#include "eau_struct.h"

namespace eau
{
    typedef int (*jx9_in_cb_t)(void* jx9_vm, void* data);
    typedef int (*jx9_out_cb_t)(void* jx9_vm, void* data);
    typedef int (*jx9_log_cb_t)(const void* msg, unsigned int len, void* data);

    int run_jx9_exec(const char *script, const char *fname,
            jx9_in_cb_t pf_in,
            jx9_out_cb_t pf_out,
            jx9_log_cb_t pf_log);

    bool set_jx9_variable(void* jx9_vm, const char *jx9_name, const void *jx9_value);

    bool new_jx9_json_value(void* jx9_vm, const string &value, void* &jx9_value);
    bool add_jx9_json_object(void* jx9_vm, const pair_ptr_t &key, void* &jx9_json);
    bool add_jx9_json_object(void* jx9_vm, const pair_t &key, void* &jx9_json);
    bool add_jx9_json_object(void* jx9_vm, const json1_t &keys, void* &jx9_json);
    bool add_jx9_json_object(void* jx9_vm, const json2_t &keys, void* &jx9_json);

} // namespace eau

#endif // _JX9_API_H_
