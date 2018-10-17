#pragma once
#include <memory>
#include <string>
#include <libimobiledevice/libimobiledevice.h>

namespace ishell
{
    namespace handle
    {
        class Device
        {
        public:
          Device();
          explicit Device(const std::string &udid);
          Device(const Device&) = delete;
          Device( Device&&) = delete;
          ~Device();

         operator idevice_t() {return m_handle;}


        private:
            idevice_t m_handle;
        };
    }
}
