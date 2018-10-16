#include <iostream>
#include <typeinfo>

int main()
{
    // (a)
    std::cout << "Who goes with F\145rgus?\012";     // 'e' | <newline>
    std::cout << typeid('\145').name() << " "        // char declared in octal form
              << typeid('\012').name() << std::endl; // char declared in octal form

    // (b)
    std::cout << typeid(3.14e1L).name() << std::endl; // long double version of pi.

    // (c)
    std::cout << typeid(1024.0f).name() << std::endl; // float.

    // (d)
    std::cout << typeid(3.14L).name() << std::endl; // Long double again.
}
