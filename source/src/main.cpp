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

#include <iostream>
#include "communication.h"
#include "i2c.h"
#include "spi.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Interface::Communication* moduleI2c = new EmbeddedCommunication::I2C();
    Interface::Communication* moduleSpi = new EmbeddedCommunication::SPI();
    
    moduleI2c->setBusConfiguration({
        .id = EmbeddedCommunication::I2C::BUS_SPEED,
        .value = EmbeddedCommunication::I2C::SLOW_BUS
    });

    moduleSpi->setBusConfiguration({
        .id = EmbeddedCommunication::SPI::NUM_OF_CHANNEL,
        .value = EmbeddedCommunication::SPI::CHANNEL_NUM_4,
    });
    
    printf("This is cpp template");

    return 0;
}
