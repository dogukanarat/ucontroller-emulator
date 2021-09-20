#include "spi.h"

using namespace EmbeddedCommunication;

void SPI::open() {};
void SPI::close() {};
void SPI::setBusConfiguration(const Interface::BusConfigurationParameter parameter) {};
void SPI::getBusConfigration(Interface::BusConfigurationParameter& parameter) {};
void SPI::read(const Interface::BufferParameter buffer) {};
void SPI::write(Interface::BufferParameter& buffer) {};