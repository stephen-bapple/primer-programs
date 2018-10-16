#include <iostream>

int main()
{
    int i = 0;

    // (a) Invalid: can't assign int address to double pointer.
    //double* dp = &i;

    // (b) Invalid: can't assign an int variable to an int pointer.
    // Needs to be literal 0/some form of null or an address of an int.
    //int *ip = i;

    // (c) Valid: assigns an int address to an int pointer.
    int *p = &i;

}
