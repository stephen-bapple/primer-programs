#include <iostream>

int main()
{
    int i = 42;      // Creates an int variable with value 42.
    int *p1 = &i;    // Creates an int pointer variable that points to i.

    /* Multiples the value at the address p holds by itself and stores the 
     * result back in the same memory location. i = i * i would be equivalent.
     * Now, i=42 * 42 and *p = 42 * 42 
     */
    *p1 = *p1 * *p1;
    std::cout << "*p1=" << *p1 << ", " << "i=" << i << std::endl;
}
