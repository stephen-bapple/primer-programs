#include <iostream>
#include <typeinfo>

int main()
{
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci; // b is an int. Toplvl const dropped.
    auto c = cr; // c is an int. Toplvl const dropped.
    auto d = &i; // d is a ptr to an int.
    auto e = &ci; // e is a ptr to a const int.
    auto &g = ci; // g is const int ref

    std::cout << "a_=" << a << " b_=" << b << " c_=" << c << std::endl
              << "d_=" << d << " e_=" << e << " g_=" << g << std::endl;
 
    /** Exercise 2.33: **/
    a = 42; // a, an int, gets the value 42.
    std::cout << "a_=" << a << " b_=" << b << " c_=" << c << std::endl
              << "d_=" << d << " e_=" << e << " g_=" << g << std::endl;

    b = 42; // b, an int, gets the value 42.
    std::cout << "a_=" << a << " b_=" << b << " c_=" << c << std::endl
              << "d_=" << d << " e_=" << e << " g_=" << g << std::endl;

    c = 42; // c, an int, gets the value 42;
    std::cout << "a_=" << a << " b_=" << b << " c_=" << c << std::endl
              << "d_=" << d << " e_=" << e << " g_=" << g << std::endl;
    
    // Error: d is a ptr to an int and we cannot assign literals (excpt 0) to ptrs
    //d = 42;
 
    // Error: e is a ptr to a const int and we cannot assign literals (ex 0) to ptrs
    //e = 42;

    // Error: g is a const int& so we can't change its value.
    //g = 42;
    std::cout << "a_=" << a << " b_=" << b << " c_=" << c << std::endl
              << "d_=" << d << " e_=" << e << " g_=" << g << std::endl;
 
}
