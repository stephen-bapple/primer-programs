#include <iostream>
#include "Chapter6.h"

using std::cout; using std::endl;

int main()
{
    for (int i = 0; i != 10; ++i)
    {
        cout << "factorial(" << i << ") = " << fact(i) << endl;
    }
}
