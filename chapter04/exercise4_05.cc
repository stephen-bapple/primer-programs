#include <iostream>
using std::cout; using std::endl;

int main()
{
    cout << "Expected -86: " << -30 * 3 + 21 / 5 << endl;
    cout << "Expected -18: " << -30 + 3 * 21 / 5 << endl;
    cout << "Expected   0: " <<  30 / 3 * 21 % 5 << endl;
    cout << "Expected  -2: " << -30 / 3 * 21 % 4 << endl;
}

