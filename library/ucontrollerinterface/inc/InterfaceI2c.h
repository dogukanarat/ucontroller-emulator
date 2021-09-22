#ifndef UCONTROLLER_INTERFACE_I2C_H
#define UCONTROLLER_INTERFACE_I2C_H

#include "InterfaceCommunication.h"

namespace UController
{
    namespace Interface
    {
        class I2C : public Communication
        {
            public:
            I2C() : Communication() {};
            ~I2C() {};

            enum BusConfigurationParameterId
            {
                BUS_SPEED = 0,
            };

            enum BusSpeed
            {
                FAST_BUS = 0,
                SLOW_BUS,
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
#endif
