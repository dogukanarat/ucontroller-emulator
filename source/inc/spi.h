#ifndef _INC_SPI_H
#define _INC_SPI_H

#include "communication.h"

namespace EmbeddedCommunication
{
    class SPI : public Interface::Communication
    {
        public:
        SPI() : Interface::Communication() {};
        ~SPI() {};

        enum BusConfigurationParameterId
        {
            NUM_OF_CHANNEL= 0,
        };

        enum NumOfChannel
        {
            CHANNEL_NUM_4 = 0,
            CHANNEL_NUM_8,    
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