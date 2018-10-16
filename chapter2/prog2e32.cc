#include <iostream>

int main()
{
    // Cannot init a ptr with an int var, even if the value is zero.
    int null = 0;//, *p = null;
 
    // Three ways to fix:
    int *p = NULL;
    p = 0;
    p = nullptr;
}
