#pragma once
#include "GroundVehicle.h"
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race
{

    class Centaur : public Ground {
    public:
        DINAMLIBRACE_API Centaur() {
            this->speed = 15;
            this->time_to_out = 8;
        }
        double DINAMLIBRACE_API Funk_centaur(int distance);
    };
}