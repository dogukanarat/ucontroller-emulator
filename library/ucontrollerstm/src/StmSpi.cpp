#include "StmSpi.h"

using namespace UController::Stm;

void SPI::open() {};
void SPI::close() {};
void SPI::setBusConfiguration(const UController::Interface::BusConfigurationParameter parameter) {};
void SPI::getBusConfigration(UController::Interface::BusConfigurationParameter& parameter) {};
void SPI::read(const UController::Interface::BufferParameter buffer) {};
void SPI::write(UController::Interface::BufferParameter& buffer) {};