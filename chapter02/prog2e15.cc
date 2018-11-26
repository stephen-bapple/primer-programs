#include <iostream>

int main()
{
    // (a): Valid. 1.01 will be narrowed to 1.
    int ival = 1.01;

    // (b): Invalid. Reference type must be initialized to another object.
    //int &rval1 = 1.01;

    // (c): Valid. 
    int &rval2 = ival;

    // (d): Invalid. References must be initialized as soon as defined.
    //int &rval3;
}
