#include <iostream>
using std::cout; using std::cin; using std::endl;

int main()
{
    int a(9), b(5), c(5), d(-11);

    if (a > b && b > c && c > d)
    {
        cout << "a > b > c > d" << endl;
    }
    else
    {
        cout << "!(a > b > c > d)" << endl;
    }
}

