#pragma once
#include <iostream>
#include <stdlib.h>
#include <fstream>
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
    void writeTemperature();
};
