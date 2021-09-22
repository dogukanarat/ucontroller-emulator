#include "StmSpi.h"
#include <iostream>

using namespace UController::Stm;

void SPI::open()
{
    std::cout << "STM SPI Driver" << std::endl;
};
void SPI::close() {};
void SPI::setBusConfiguration(const UController::Interface::BusConfigurationParameter parameter) {};
void SPI::getBusConfigration(UController::Interface::BusConfigurationParameter& parameter) {};
void SPI::read(const UController::Interface::BufferParameter buffer) {};
void SPI::write(UController::Interface::BufferParameter& buffer) {};