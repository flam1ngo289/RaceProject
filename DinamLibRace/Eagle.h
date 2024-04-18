#pragma once
#include "AirVehicle.h"
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif


namespace dinam_lib_Race {
    class Eagle : public Air {
    public:
        DINAMLIBRACE_API Eagle() {
            this->speed = 8;
        }
        double DINAMLIBRACE_API Funk_eagle(int distance);
    };
}