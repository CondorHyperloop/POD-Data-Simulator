#include "Helper.h"

#define LOG(x) std::cout << x << std::endl

int main(int argc, char const *argv[])
{
    LOG("Generating temperature...");
    Helper().writeTemperature();
    return 0;
}
