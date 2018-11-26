#include <iostream>

int main()
{
    // a/b are ints.
    int a = 3, b = 4;

    decltype(a) c = a; // c is type int. c=3

    //  a = b returns type int&, but decltype does not evaluate it so a still=3
    decltype(a = b) d = a; // d is type int& bound to a. a=3, d=3

    // a=3, b=4, c=3, d=3
    std::cout << "a=" << a << ", b=" << b 
              << ", c=" << c << ", d=" << d << std::endl;
}

