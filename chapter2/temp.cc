#include <iostream>
#include <typeinfo>
#include <vector>

int main()
{
    int i = 0;
    const int ci = i;
    auto ptr = &ci; // Should be same as const int * ptr = &ci;
    const int *ptr2 = &ci;

    std::cout << typeid(ptr).name() << "> " << ptr << "> " << *ptr << std::endl;
    std::cout << typeid(ptr2).name() << "> " << ptr2 << "> " 
              << *ptr2 << std::endl;
   
    //*ptr = 0;
    //*ptr2 = 3;
    ptr = nullptr;
    ptr2 = nullptr;

    std::cout << typeid(ptr).name() << "> " << ptr << "> N/A" << std::endl;
    std::cout << typeid(ptr2).name() << "> " << ptr2 << "> N/A" << std::endl;


    auto &j = ci;
    // j++; // Error: j has to be read only.
    int ie = 5;
    int *ip = &ie;
    auto huh = *ip;
    std::cout << "ie=" << ie << std::endl;
    std::cout << typeid(huh).name() << "|" << huh << std::endl;
    huh++;
    std::cout << typeid(huh).name() << "|" << huh << std::endl;
    std::cout << "ie=" << ie << std::endl;

    int **ppi = &ip; // Ptr to ptr to int
    auto lol = *ppi; // Should be ptr to int!
    std::cout << typeid(lol).name() << std::endl;

    std::vector<bool> v{0, 0, 0};
    bool x = v[1];
    x = 1;
    std::cout << typeid(x).name() << std::endl;
    std::cout << v[0] << ' ' << v[1] << ' ' << v[2] << std::endl;

}

