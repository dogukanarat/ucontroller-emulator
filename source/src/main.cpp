/*
 * The MIT License (MIT)
 * Copyright (c) 2021 Dogukan Fikri Arat
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * */

#include "main.h"

using namespace std;

int main(int argc, const char * argv[])
{
    UController::Adapter::I2C* I2C = new UController::Adapter::I2C();
    UController::Adapter::SPI* SPI = new UController::Adapter::SPI();
    UController::Interface::Communication* EmulatorI2C = new UController::Emulator::I2C();
    UController::Interface::Communication* EmulatorSPI = new UController::Emulator::SPI();
    I2C->setAdaptee(EmulatorI2C);
    SPI->setAdaptee(EmulatorSPI);

    I2C->setBusConfiguration({
        .id = UController::Interface::I2C::BUS_SPEED,
        .value = UController::Interface::I2C::SLOW_BUS
    });

    SPI->setBusConfiguration({
        .id = UController::Interface::SPI::NUM_OF_CHANNEL,
        .value = UController::Interface::SPI::CHANNEL_NUM_4,
    });
    
    cout << "This is cpp template" << endl;

    return 0;
}
