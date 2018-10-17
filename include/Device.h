#pragma once
#include "Handles.h"

namespace ishell
{
    class Device
    {
    public:
        explicit Device(const std::string& udid);
        virtual ~Device() {}

    };
}
