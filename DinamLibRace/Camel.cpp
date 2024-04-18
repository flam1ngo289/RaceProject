#include "pch.h"
#include "Camel.h"
#include <string>

namespace dinam_lib_Race {

    double Camel::Funk_camel(int distance) {
        int time_out_1 = 5, time_out_all = 8, z = 0;
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

        else if (z == 1) {
            x = y + time_out_1;

            return x;
        }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; ++i) {
                x += time_out_all;
            }

            return x;
        }
        return 0;
    }
}