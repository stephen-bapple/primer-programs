#include <iostream>

int main()
{
    int i = 20;
    int j = 50;
    int *p = &i;

    // 20 50 <random address> 20
    std::cout << "i=" << i << " " << "j=" << j << " " 
              << "p=" << p << " " << "*p=" << *p << std::endl;
    p = &j; 
    // 20 50 <diff random address> 50
    std::cout << "i=" << i << " " << "j=" << j << " " 
              << "p=" << p << " " << "*p=" << *p << std::endl;

    // 20 3 <same addr> 3
    *p = 3;
    std::cout << "i=" << i << " " << "j=" << j << " " 
              << "p=" << p << " " << "*p=" << *p << std::endl;
}
