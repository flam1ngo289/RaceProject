#include "pch.h"
#include "Centaur.h"
#include <string>

namespace dinam_lib_Race {
    double Centaur::Funk_centaur(int distance) {
        int time_out_all = 2, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (distance) / speed;
        z = (distance / speed) / time_to_out;
        if (((distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z > 0) {
            for (int i = 0; i < z; ++i) {
                x += time_out_all;
            }
            x += y;
            return x;
        }
        return 0;
    }
}
