#include "pointerLib.h"
#include <stdio.h>

int SumNoPointer(int def, int sum)
{
    return def += sum;
}

int SumPointer(int &def, int sum)
{
    return def += sum;
}

int *ReturnMemAddr(int &addr)
{
    return &addr;
}
