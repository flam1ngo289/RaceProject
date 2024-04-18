#pragma once
#ifdef  DINAMLIBRACE_EXPORTS
#define DINAMLIBRACE_API __declspec(dllexport)
#else
#define DINAMLIBRACE_API __declspec(dllimport)
#endif

namespace dinam_lib_Race
{
    class Ground {
    public:
        int speed;
       int time_to_out;
    }; 
}