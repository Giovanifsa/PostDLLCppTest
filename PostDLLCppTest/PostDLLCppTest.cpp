#include <string>
#include <iostream>

#include "PostDLLCpp/PostDLLCpp.h"

int main()
{
    REQUEST_ERR_INFO reqError;
    runPostRequestAndSaveToFile(reqError);

    if (reqError.failed)
    {
        std::cout << reqError.cause << std::endl;
        return -1;
    }

    return 0;
}