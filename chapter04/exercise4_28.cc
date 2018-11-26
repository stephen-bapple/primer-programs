#include <iostream>
using std::cout; using std::endl;
int main()
{
    cout << "Size of int (bits): " << sizeof(int) * 8 << endl
         << "Size of char (bits): "<< sizeof(char) * 8 << endl
         << "Size of wchar_t (bits): "<< sizeof(wchar_t) * 8 << endl
         << "Size of bool (bits): "<< sizeof(bool) * 8 << endl
         << "Size of float (bits): "<< sizeof(float) * 8 << endl
         << "Size of double (bits): "<< sizeof(double) * 8 << endl
         << "Size of void (bits): "<< sizeof(void*) * 8 << endl;
}

