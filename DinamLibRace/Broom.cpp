#include "pch.h"
#include "Broom.h"

namespace dinam_lib_Race {
    double Broom::Funk_broom(int distance) {
        int percent_all = distance / 1000;
        double x = 0, y = 0, z = 0;

        if (percent_all > 0) {
            y = static_cast<double>(distance - (distance * percent_all / 100));
            x = y / speed;
            return x;
        }

        else {
            x = static_cast<double>(distance / speed);
            return x;
        }
    }
}