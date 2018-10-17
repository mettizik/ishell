#pragma once
#include <string>
#include <exception>
#include <libimobiledevice/libimobiledevice.h>

namespace ishell
{
    class Error
    {
    public:
        template<class NativeErrorT>
        Error(NativeErrorT errorCode, const char* errorText, std::string extendedInfo = "")
            : m_error(errorText)
            , m_nativeError(static_cast<decltype(m_nativeError)>(errorCode))
            , m_info(extendedInfo)
        {}

        const std::string& get_info() const
        {
            return m_error;
        }

        uint64_t error_code() const
        {
            return m_nativeError;
        }

    private:
        const uint64_t m_nativeError;
        const std::string m_info;
        const char* m_error;
    };

    void HandleError(idevice_error_t error);
}
