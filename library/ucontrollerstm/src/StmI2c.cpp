#include "StmI2c.h"
#include <iostream>

using namespace UController::Stm;

void I2C::open()
{
    std::cout << "STM I2C Driver" << std::endl;
};
void I2C::close() {};
void I2C::setBusConfiguration(const UController::Interface::BusConfigurationParameter parameter) {};
void I2C::getBusConfigration(UController::Interface::BusConfigurationParameter& parameter) {};
void I2C::read(const UController::Interface::BufferParameter buffer) {};
void I2C::write(UController::Interface::BufferParameter& buffer) {};