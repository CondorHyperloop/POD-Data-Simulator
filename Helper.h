#pragma once
#include <stdlib.h>
#include <ctime>

class Helper
{
private:
    const float UPPER_BOUNDARY = 500.0;
    const float BELOW_BOUNDARY = 0.0;
public:
    Helper();
    ~Helper();
    float generateTemperature();
    inline float getUpperBoundary() const;
    inline float getBelowBoundary() const;
};
