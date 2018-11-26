#include <iostream>
#include <typeinfo>

int main()
{
    // Error: unsure why. Syntax is wrong but I cannot describe why.
    // Perhaps because declarations are not expressions?    
//  std::cin >> int input_value;

    // Error: cannot list initialize if data loss (double -> int) possible.
//  int i = {3.14};

    // Error: wage is undeclared and can't be used to init salary.
//  double salary7 = wage = 9999.99; 

    // Nothing wrong. Type narrowing fine for non-list inits.
    int i2 = 3.14; // i.e. i = 3
}
