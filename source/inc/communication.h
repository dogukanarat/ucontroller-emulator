#ifndef _INC_COMMUNICATION_H
#define _INC_COMMUNICATION_H

#include <stdint.h>

namespace Interface
{
    typedef struct 
    {
        int32_t id;
        int32_t value;
    } BusConfigurationParameter;

    typedef struct
    {
        uint8_t* ptrBuffer;
        uint32_t size;
    } BufferParameter;

    class Communication
    {
        public:
        Communication() {};
        virtual ~Communication() {};
        
        virtual void open() = 0;
        virtual void close() = 0;
        virtual void setBusConfiguration(const BusConfigurationParameter parameter) = 0;
        virtual void getBusConfigration(BusConfigurationParameter& parameter) = 0;
        virtual void read(const BufferParameter buffer) = 0;
        virtual void write(BufferParameter& buffer) = 0;

    };
}
#endif