#include <iostream>
using std::cout; using std::endl;

int main()
{
    cout << "+21 % +6: " << (21 % 6) << endl;
    cout << "-21 % +6: " << (-21 % 6) << endl;
    cout << "+21 % -6: " << (21 % -6) << endl;
    cout << "-21 % -6: " << (-21 % -6) << endl;
    cout << " +0 % +1: " << 0 % 1 << endl;
    cout << " -0 % +1: " << -0 % 1 << endl;
    cout << " +0 % -1: " << 0 % -1 << endl;
    cout << " -0 % -1: " << -0 % -1 << endl;
}

