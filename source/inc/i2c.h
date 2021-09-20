#ifndef _INC_I2C_H
#define _INC_I2C_H

#include "communication.h"

namespace EmbeddedCommunication
{
    class I2C : public Interface::Communication
    {
        public:
        I2C() : Interface::Communication() {};
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
        void setBusConfiguration(const Interface::BusConfigurationParameter parameter);
        void getBusConfigration(Interface::BusConfigurationParameter& parameter);
        void read(const Interface::BufferParameter buffer);
        void write(Interface::BufferParameter& buffer);
    };

}
#endif