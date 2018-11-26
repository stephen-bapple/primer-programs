#include <iostream>
#include <typeinfo>

int main()
{
    // (a)
    std::cout << "\062\x4D\xA";     // 2M <newline>
    std::cout << std::endl;


    std::cout << "\062\t\x4D\xA";     // 2M <newline>
    char a[] = {1, 2, 3, 4, 5, 6};
    std::cout << typeid(a).name() << std::endl;
    std::cout << a << std::endl;

}
