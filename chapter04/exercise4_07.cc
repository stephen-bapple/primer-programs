#include <iostream>
using std::cout; using std::endl;

int main()
{
    {
        unsigned a = -1;
        unsigned b = -1;
        cout << "a= " << a << " | b= " << b << endl;
        cout << "a + 1: " << a + 1 << endl;
        cout << "b + 1: " << b + 1 << endl;
        cout << "a + b: " << a + b << endl;
    }
    {
        int a = 100000;
        int b = 100000;
        cout << "a= " << a << " | b= " << b << endl;
        cout << "a * b = " << a * b << endl;

    }
    {
        char a = 'B';
        char offset = -1;
        cout << "a = '" << a << "' | offset = '" << offset << "'" << endl;
        cout << "a + offset: " << (char)(a + offset) << endl; 
    }
}
