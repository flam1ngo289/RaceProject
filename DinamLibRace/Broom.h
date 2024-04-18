#pragma once
#include "AirVehicle.h"
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race {

    class Broom : public Air {
    public:
        DINAMLIBRACE_API Broom() {
            this->speed = 20;
        }
        double DINAMLIBRACE_API Funk_broom(int distance);
    };
}
