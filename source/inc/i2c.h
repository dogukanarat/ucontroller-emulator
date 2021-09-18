#include "communication.h"

namespace EmbeddedCommunication
{
    class I2C : public Interface::Communication
    {
        public:
        I2C() : Interface::Communication() {};
        ~I2C() {};

        void open();
        void close();
        void setBusConfiguration(Interface::BusConfigurationParameter& parameter);
        void getBusConfigration(Interface::BusConfigurationParameter& parameter);
        void read(Interface::BufferParameter& buffer);
        void write(Interface::BufferParameter& buffer);
    };

}