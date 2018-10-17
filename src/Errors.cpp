#include "Errors.h"

void ishell::HandleError(idevice_error_t errorCode)
{
    switch(errorCode)
    {
        case IDEVICE_E_SUCCESS:
            return;
        case IDEVICE_E_BAD_HEADER:
            throw ishell::Error(errorCode, "IDEVICE_E_BAD_HEADER");
        case IDEVICE_E_INVALID_ARG:
            throw ishell::Error(errorCode, "IDEVICE_E_INVALID_ARG");
        case IDEVICE_E_NO_DEVICE:
            throw ishell::Error(errorCode, "IDEVICE_E_NO_DEVICE");
        case IDEVICE_E_NOT_ENOUGH_DATA:
            throw ishell::Error(errorCode, "IDEVICE_E_NOT_ENOUGH_DATA");
        case IDEVICE_E_SSL_ERROR:
            throw ishell::Error(errorCode, "IDEVICE_E_SSL_ERROR");
        case IDEVICE_E_UNKNOWN_ERROR:
            throw ishell::Error(errorCode, "IDEVICE_E_UNKNOWN_ERROR");
        default:
            throw ishell::Error(errorCode, "Undefined idevice error");
    }
}
