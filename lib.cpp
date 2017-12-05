#include "lib.h"

#include "version.h"

int version()
{
    return PROJECT_VERSION_MAJOR;
}

int build_number()
{
     return PROJECT_VERSION_PATCH;
}