#include <iostream>
#include <typeinfo>

using std::cout; using std::endl;

int main()
{
    // Definitions for exercise 4.34:
    bool    flag;           char            cval;
    short   sval;           unsigned short  usval;
    int     ival;           unsigned int    uinval;
    long    lval;           unsigned long   ulval;
    float   fval;           double          dval;

    // Exercise 4.34

    // (a)
    //
    // fval is a float value. When used in a conditional statement
    // it gets converted to a bool (false if 0, true if != 0)
    if (fval) {}

    // (b) dval = fval + val * cval
    //
    // First, ival is converted to float to match fval, fval and ival are added,
    // then the result is converted to double.

    cout << typeid(ival + fval).name() << endl;


    // (c) dval + ival * cval
    //
    // The multiplication is done first, cval is converted from char to int,
    // then is multiplied by ival. The int result is converted to double then
    // dval and the double result are added together to create a double.
    cout << typeid(ival * cval).name() << endl;

    cout << typeid(dval + ival * cval).name() << endl;

}
