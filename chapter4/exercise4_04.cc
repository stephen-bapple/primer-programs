#include <iostream>
using std::cout; using std::endl;

int main()
{
    cout << "Expected result : " 
         << (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2) << endl;
    cout << "Result          : " 
         << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
}

