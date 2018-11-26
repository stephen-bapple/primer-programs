#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i;
    std::cout << i << "-" << j << "-" << ::i << std::endl;
}
