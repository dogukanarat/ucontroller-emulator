#ifndef UCONTROLLER_INTERFACE_ADAPTER_H
#define UCONTROLLER_INTERFACE_ADAPTER_H

#include "InterfaceCommunication.h"
#include "InterfaceI2c.h"
#include "InterfaceSpi.h"
#include "InterfaceUart.h"

namespace UController
{
    namespace Adapter
    {
        class I2C : Interface::Communication
        {
            public:
            void setAdaptee(Interface::Communication* i2cModule) { m_i2c = i2cModule; };

            void open()
            {
                m_i2c->open(); 
            };
            void close() 
            {
                m_i2c->close(); 
            };
            void setBusConfiguration(const Interface::BusConfigurationParameter parameter) 
            {
                m_i2c->setBusConfiguration(parameter); 
            };
            void getBusConfigration(Interface::BusConfigurationParameter& parameter) 
            {
                m_i2c->getBusConfigration(parameter); 
            };
            void read(const Interface::BufferParameter buffer)
            {
                m_i2c->read(buffer);
            };
            void write(Interface::BufferParameter& buffer)
            {
                m_i2c->write(buffer);
            };

            private:
            Interface::Communication* m_i2c;
        };

        class SPI : Interface::Communication
        {
            public:
            void setAdaptee(Interface::Communication* spiModule) { m_spi = spiModule; };

            void open()
            {
                m_spi->open(); 
            };
            void close() 
            {
                m_spi->close(); 
            };
            void setBusConfiguration(const Interface::BusConfigurationParameter parameter) 
            {
                m_spi->setBusConfiguration(parameter); 
            };
            void getBusConfigration(Interface::BusConfigurationParameter& parameter) 
            {
                m_spi->getBusConfigration(parameter); 
            };
            void read(const Interface::BufferParameter buffer)
            {
                m_spi->read(buffer);
            };
            void write(Interface::BufferParameter& buffer)
            {
                m_spi->write(buffer);
            };

            private:
            Interface::Communication* m_spi;
        };
    }
}
#endif
