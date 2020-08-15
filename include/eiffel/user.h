#pragma once

#include <switch.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "common.h"

#define EIFFEL_USER_SERVICE_NAME "efl:u"
#define EIFFEL_MODULE_ID 0x144

typedef enum {
    EFL_U_CMD_GET_PLUGIN_READY_EVENT = 0,
    EFL_U_CMD_GET_PLUGIN_INFO = 1,
} EiffelUserCommandId;

static const Result EFL_U_RESULT_PLUGIN_NOT_ACTIVE = MAKERESULT(EIFFEL_MODULE_ID, 0);
static const Result EFL_U_RESULT_SHARED_MEM_NOT_REGISTERED = MAKERESULT(EIFFEL_MODULE_ID, 1);

Result eiffelInitialize();
void eiffelExit();

#ifdef __cplusplus
}
#endif
