#pragma once
#include "GroundVehicle.h"
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race
{
    class Camel_speedboat : public Ground {
    public:
        DINAMLIBRACE_API Camel_speedboat() {
            this->speed = 40;
            this->time_to_out = 10;
        }
        double DINAMLIBRACE_API Funk_camel_speedboat(int distance);
    };
}
