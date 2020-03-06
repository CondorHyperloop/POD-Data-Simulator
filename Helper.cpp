#include "Helper.h"

Helper::Helper() {}

Helper::~Helper() {}

inline float Helper::getUpperBoundary() const {
    return this->UPPER_BOUNDARY;
}

inline float Helper::getBelowBoundary() const {
    return this->BELOW_BOUNDARY;
}

float Helper::generateTemperature() {
    srand((int)time(0));
    return rand() % ((int)getUpperBoundary()) + ((int)getBelowBoundary()) ;
}