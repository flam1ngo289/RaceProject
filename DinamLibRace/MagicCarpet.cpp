#include "pch.h"
#include "MagicCarpet.h"

namespace dinam_lib_Race {
double  Magic_carpet::Funk_Magic_carpet(int distance) {
    int percent_all = 6;
    double x = 0, y = 0, z = 0;

    if (distance < 1000) {
        int percent_all = 6;
    }

    else if (distance > 1000 && distance < 5000) {
        percent_all = 3;
    }

    else if (distance > 5000 && distance < 10000) {
        percent_all = 10;
    }

    else if (distance > 10000) {
        percent_all = 5;
    }

    y = static_cast<double>(distance - (distance * percent_all / 100));
    x = y / speed;
    return x;
    }
}
