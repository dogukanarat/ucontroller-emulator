#include "EmulatorI2c.h"

using namespace UController::Emulator;

void I2C::open() {};
void I2C::close() {};
void I2C::setBusConfiguration(const UController::Interface::BusConfigurationParameter parameter) {};
void I2C::getBusConfigration(UController::Interface::BusConfigurationParameter& parameter) {};
void I2C::read(const UController::Interface::BufferParameter buffer) {};
void I2C::write(UController::Interface::BufferParameter& buffer) {};