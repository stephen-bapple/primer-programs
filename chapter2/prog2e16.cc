#include <iostream>

int main()
{
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    std::cout << "i = 0, &r1 = i; double d = 0, &r2 = d;" << std::endl;
    // (a): Fine. 
    // This changes the object referred to by r2/d to have a value of 3.14159/
    std::cout << "r2 = 3.14159;" << std::endl;
    r2 = 3.14159;
    std::cout << "r2 = " << r2 << ", d= " << d << std::endl;

    // (b): Valid. Sets r2/d to the value of i/r1
    std::cout << "r2 = r1;" << std::endl;
    r2 = r1;
    std::cout << "r1 = " << r1 << ", r2= " << r2 << std::endl;

    // (c): Okay. i/r1 gets the value of r2 and d.
    std::cout << "i = r2" << std::endl;
    i = r2;
    std::cout << "i = " << i << ", r2= " << r2 << std::endl;

    // (d): Invalid. Cannot rebind references. 
    std::cout << "r1 = d;" << std::endl;
    r1 = d;
    std::cout << "r1 = " << r1 << ", d= " << d << std::endl;
}
