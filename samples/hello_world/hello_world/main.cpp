
#include <sstream>
#include <iostream>
#include <orbis/libkernel.h>

#include "../../_common/log.h"

std::stringstream debugLogStream;

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);

    DEBUGLOG << "PS5X started!";
    DEBUGLOG << "Welcome to PS5X for PS4.";

    while (true)
    {
        sceKernelUsleep(1000000);
    }

    return 0;
}
