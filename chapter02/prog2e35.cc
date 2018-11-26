#include <iostream>
#include <typeinfo>

int main()
{
     /** Exercise 2.35 **/

    const int i = 42; // Ok.
    auto j = i; /* top lvl const ignored. j is int */
    const auto &k = i; // Reference, top lvl const preserved. k is const int &
                       // the const is redundant but allowed.

    // const is low lvl in the context of a ptr to i's address.
    auto *p = &i; // => p is const int* (pointer to a const int, ptr not const)

    // j2 is a constant int unlike j because we specified we wanted it that way.
    const auto j2 = i, &k2 = i; // k2 is a reference to a const int.
                                // The const is redundant but allowed.

    // Printing
    std::cout << "type(i_) : " << typeid(i).name() << std::endl
              << "type(j_) : " << typeid(j).name() << std::endl
              << "type(k_) : " << typeid(k).name() << std::endl
              << "type(p_) : " << typeid(p).name() << std::endl
              << "type(j2_): " << typeid(j2).name() << std::endl
              << "type(k2_): " << typeid(k2).name() << std::endl;

    // This should cause an error since i is constant:
    //i = 5;

    // This should be fine since j is just an int. i should be unchanged:
    std::cout << "i_=" << i << " j_=" << j << std::endl;
    j = 2;
    std::cout << "i_=" << i << " j_=" << j << std::endl;

    // This should cause an error since k is a referene to a constant:
    // k = 2;

    // This should cause an error since p points at a constant int: 
    // *p = 4;
    
    // This should be fine since p itself is not constant:
    std::cout << "p_=" << p << " *p_=" << *p << std::endl;
    p = &j;
    std::cout << "p_=" << p << " *p_=" << *p << std::endl;

    // This should cause an error because j2 is a const int:
    // j2 = 3; 

    // This should also cause an error since k2 is a reference to a const int:
    // k2 = 5;

    // Note that the const part of the base type is redundant for k and k2:
    // So n and m without the const should have the same types:
    auto &n = i;
    auto &m = i;

    // Since we can't change them we should get an error here:
    // n = 2;
    // m = 3;

    std::cout << "type(n_) : " << typeid(n).name() << std::endl
              << "type(m_) : " << typeid(m).name() << std::endl;

}

