#pragma once
#include "GroundVehicle.h"

#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race {

    class Camel : public Ground {
    public:
        DINAMLIBRACE_API Camel() {
            this->speed = 10;
            this->time_to_out = 30;
        }

        double DINAMLIBRACE_API Funk_camel(int distance);
    };
}