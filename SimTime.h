#ifndef SIMTIME_H_INCLUDED
#define SIMTIME_H_INCLUDED

#include <SDL.h>


class SimTime {

private:
    Uint32 previousRealTicks;
    Uint32 currentRealTicks;
    Uint32 previousSimTicks;
    Uint32 currentSimTicks;

    float timeMultiplier;

public:

    Uint32 GetCurrentSimTime();
    void SetTimeMultiplier(float multiplier);


};





#endif // SIMTIME_H_INCLUDED
