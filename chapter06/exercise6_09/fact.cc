#include "Chapter6.h"

unsigned long fact(unsigned long n)
{
    unsigned long ret = 1;
    while (n > 1) ret *= n--;
    return ret;
}

