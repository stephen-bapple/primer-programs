#include <iostream>
#include <typeinfo>
#include <stdio.h>
#include <iomanip>

int _A;
int __;
int main()
{
    // Invalid: double is a reserved keyword.
//  int double = 3.14;

    // Valid inside main. Would not be valid as a global as identifiers 
    // beginning with '_' are reserved by the standard library.
    int _;

    // Invalid: identifiers cannot contain '-'s.
//  int catch-22;

    // Invalid: identifiers cannot start with a number.
//  int 1_or_2 = 1;

    // Valid. Double is distinct from double and only double is reserved.
    double Double = 3.14;
}
