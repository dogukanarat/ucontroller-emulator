#include "EmulatorUart.h"

using namespace UController::Emulator;

void UART::open() {};
void UART::close() {};
void UART::setBusConfiguration(const UController::Interface::BusConfigurationParameter parameter) {};
void UART::getBusConfigration(UController::Interface::BusConfigurationParameter& parameter) {};
void UART::read(const UController::Interface::BufferParameter buffer) {};
void UART::write(UController::Interface::BufferParameter& buffer) {};