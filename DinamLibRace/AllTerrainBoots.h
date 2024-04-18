#pragma once
#include "GroundVehicle.h"

#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race {

    class All_terrain_boots : public Ground {
    public:
        DINAMLIBRACE_API All_terrain_boots() {
            this->speed = 6;
            this->time_to_out = 60;
        }
        double DINAMLIBRACE_API Funk_all_terrain_boots(int distance);
    };
}