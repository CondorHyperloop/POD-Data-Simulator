#include "Helper.h"
#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main(int argc, char const *argv[])
{
    LOG(Helper().generateTemperature());
    return 0;
}
