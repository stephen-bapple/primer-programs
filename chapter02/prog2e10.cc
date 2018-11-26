#include <iostream>
#include <typeinfo>

std::string global_str; // Empty string.
int global_int;         // guaranteed to be 0.

int main()
{
    int local_int;         // Undefined.
    std::string local_str; // Empty string.

    std::cout << global_int << std::endl; // Fine. Prints 0.
    std::cout << local_int << std::endl;  // Warning. Underfined.
    
    std::cout << global_str << std::endl; // Fine, prints empty string.
    std::cout << local_str << std::endl; // Fine, prints empty string.

}
