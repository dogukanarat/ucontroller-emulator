#ifndef UCONTROLLER_STM_UART_H
#define UCONTROLLER_STM_UART_H

#include "InterfaceCommunication.h"

namespace UController
{
    namespace Stm
    {
        class UART : public Interface::Communication
        {
            public:
            UART() : Interface::Communication() {};
            ~UART() {};

            enum BusConfigurationParameterId
            {
                
            };

            enum BusSpeed
            {
                
            };

            void open();
            void close();
            void setBusConfiguration(const Interface::BusConfigurationParameter parameter);
            void getBusConfigration(Interface::BusConfigurationParameter& parameter);
            void read(const Interface::BufferParameter buffer);
            void write(Interface::BufferParameter& buffer);
        };
    }
}
#endif
