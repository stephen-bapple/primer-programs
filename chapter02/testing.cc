#include <iostream>
#include <typeinfo>

int main()
{
    typedef char *pstring;
    const pstring cstr = 0; // cstr is a const pointer to a char.
    const pstring *ps; // ps is a pointer to a const pointer to a char.

    const char *cstr2 = 0;

    std::cout << typeid(cstr).name() << " vs " << typeid(cstr2).name() << std::endl;
    std::cout << typeid(*cstr).name() << " vs " << typeid(*cstr2).name() << std::endl;  
 
    auto d = 5.3;
    std::cout << typeid(d).name() << std::endl;
}
