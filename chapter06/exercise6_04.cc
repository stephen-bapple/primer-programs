#include <iostream>
using std::cout; using std::cin; using std::endl;

unsigned long fact(unsigned long value)
{
    unsigned long ret = 1;
    while (value > 1)
    {
        ret *= value--;
    }
    return ret;
}

int main()
{
    unsigned long number; 
    cout << "Enter a number to find the factorial of: ";
    while (cin >> number)
    {
        cout << "The factorial of " << number << " is " << fact(number) << endl;
    }
}
