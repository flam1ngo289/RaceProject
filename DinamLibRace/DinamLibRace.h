#pragma once
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif
#include <string>

namespace dinam_lib_Race
{
    class Ground {
    public:
        int speed;
        int time_to_out;
    };

    class Camel : public Ground {
    public:
        DINAMLIBRACE_API Camel() {
            this->speed = 10;
            this->time_to_out = 30;
        }

        double DINAMLIBRACE_API Funk_camel(int distance);
    };

    class Camel_speedboat : public Ground {
    public:
        DINAMLIBRACE_API Camel_speedboat() {
            this->speed = 40;
            this->time_to_out = 10;
        }
        double DINAMLIBRACE_API Funk_camel_speedboat(int distance);
    };

    class Centaur : public Ground {
    public:
        DINAMLIBRACE_API Centaur() {
            this->speed = 15;
            this->time_to_out = 8;
        }
        double DINAMLIBRACE_API Funk_centaur(int distance);
    };

    class All_terrain_boots : public Ground {
    public:
        DINAMLIBRACE_API All_terrain_boots() {
            this->speed = 6;
            this->time_to_out = 60;
        }
        double DINAMLIBRACE_API Funk_all_terrain_boots(int distance);
    };


    class Air {
    protected:
        int speed;
    };

    class Eagle : public Air {
    public:
        DINAMLIBRACE_API Eagle() {
            this->speed = 8;
        }
        double DINAMLIBRACE_API Funk_eagle(int distance);
    };

    class Broom : public Air {
    public:
        DINAMLIBRACE_API Broom() {
            this->speed = 20;
        }
        double DINAMLIBRACE_API Funk_broom(int distance);
    };

    class Magic_carpet : public Air {
    public:
        DINAMLIBRACE_API Magic_carpet() {
            this->speed = 10;
        }
        double DINAMLIBRACE_API Funk_Magic_carpet(int distance);
    };
}