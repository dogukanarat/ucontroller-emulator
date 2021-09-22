#ifndef UCONTROLLER_INTERFACE_SPI_H
#define UCONTROLLER_INTERFACE_SPI_H

#include "InterfaceCommunication.h"

namespace UController
{
    namespace Interface
    {
        class SPI : public Communication
        {
            public:
            SPI() : Communication() {};
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
            void setBusConfiguration(const BusConfigurationParameter parameter);
            void getBusConfigration(BusConfigurationParameter& parameter);
            void read(const BufferParameter buffer);
            void write(BufferParameter& buffer);
        };
    }
}
#endif
