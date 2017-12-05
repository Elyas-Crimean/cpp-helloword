#include <iostream>

#include "lib.h"

int main()
{
    std::cout << "Hello World!" << std::endl;
    std::cout << "Version: " <<version() <<"   build: " <<build_number() << std::endl;
    return 0;
}