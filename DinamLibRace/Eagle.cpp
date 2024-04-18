#include "pch.h"
#include "Eagle.h"

namespace dinam_lib_Race {

    double Eagle::Funk_eagle(int distance) {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        y = static_cast<double>(distance - (distance * percent_all / 100));

        x = y / speed;

        return x;
    }

}