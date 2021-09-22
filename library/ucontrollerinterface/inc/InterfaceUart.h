#pragma once

#include "InterfaceCommunication.h"

namespace UController
{
    namespace Interface
    {
        class UART : public Communication
        {
            public:
            UART() : Communication() {};
            ~UART() {};

            enum BusConfigurationParameterId
            {
                
            };

            enum BusSpeed
            {
                
            };

            void open();
            void close();
            void setBusConfiguration(const BusConfigurationParameter parameter);
            void getBusConfigration(BusConfigurationParameter& parameter);
            void read(const BufferParameter buffer);
            void write(BufferParameter& buffer);
        };
    }
}
