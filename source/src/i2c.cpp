#include "i2c.h"

using namespace EmbeddedCommunication;

void I2C::open() {};
void I2C::close() {};
void I2C::setBusConfiguration(Interface::BusConfigurationParameter& parameter) {};
void I2C::getBusConfigration(Interface::BusConfigurationParameter& parameter) {};
void I2C::read(Interface::BufferParameter& buffer) {};
void I2C::write(Interface::BufferParameter& buffer) {};