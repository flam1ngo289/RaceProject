#include "pch.h"
#include "AirVehicle.h"
#include <string>

namespace dinam_lib_Race {

    double Eagle::Funk_eagle(int distance) {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        y = static_cast<double>(distance - (distance * percent_all / 100));

        x = y / speed;

        return x;
    }

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
