#include <iostream>
using std::cout; using std::endl;

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
    cout << "fact(5): " << fact(5) << endl;
    cout << "fact(23): " << fact(23) << endl;
    cout << "fact(1): " << fact(1) << endl;
    cout << "fact(2): " << fact(2) << endl;
    cout << "fact(20): " << fact(20) << endl;
}
