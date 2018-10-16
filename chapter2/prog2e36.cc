#include <iostream>

int main()
{
    int a = 3, b = 4; // a, b are plain ints.

    decltype(a) c = a; // c is type int with value 3
    decltype((b)) d = a; // d is type int& bound to a with value 3

    // should print: a=3 b=4 c=3 d=3
    std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;

    ++c; // c <- 4
    ++d; // [d and a] <- 4

    // a = 4, b = 4, c = 4, d = 4;
    std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;

    a = 50;
    b = 1;
    c = 3;

    // a=50 b=1 c=3 d=50
    std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;

    d = 7;
    // a=7 b=1 c=3 d=7
    std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
}
