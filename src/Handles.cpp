#include "Handles.h"
#include "Errors.h"

namespace
{
    idevice_t create_device(const char* udid)
    {
        idevice_t handle = nullptr;
        ishell::HandleError(idevice_new(&handle, udid));
        return handle;
    }
}

ishell::handle::Device::Device()
    : m_handle(create_device(nullptr))
{
}

ishell::handle::Device::Device(const std::string& udid)
    : m_handle(create_device(udid.c_str()))
{
}

ishell::handle::Device::~Device()
{
    if (m_handle)
        ishell::HandleError(idevice_free(m_handle));
    m_handle = nullptr;
}
