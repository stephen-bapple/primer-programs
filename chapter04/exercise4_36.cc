#include <iostream>
using std::cout; using std::endl;

int main()
{
    /* Exercise 4.36
     *
     * Assuming i is an int and d is a double, write the expression
     * i *= d so that it does integral, rather than floating-point,
     * multiplication.
     */
    int i = 10;
    double d = 2.5;
    int integral_result = 20;
    
    i *= static_cast<int>(d);
    cout << "Expected " << integral_result << ", got " << i << endl;
}

