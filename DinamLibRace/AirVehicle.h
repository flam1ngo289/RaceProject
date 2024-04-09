#pragma once
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif
#include <string>
#include <iostream>

namespace dinam_lib_Race {

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