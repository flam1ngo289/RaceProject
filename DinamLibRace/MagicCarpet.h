#pragma once
#include "AirVehicle.h"
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race {

    class Magic_carpet : public Air {
    public:
        DINAMLIBRACE_API Magic_carpet() {
            this->speed = 10;
        }
        double DINAMLIBRACE_API Funk_Magic_carpet(int distance);
    };
}