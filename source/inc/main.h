#pragma once

#include <iostream>
#include "InterfaceAdapter.h"

#ifdef EMULATOR
#include "EmulatorI2c.h"
#include "EmulatorSpi.h"
#endif

#ifdef STM
#include "StmI2c.h"
#include "StmSpi.h"
#endif