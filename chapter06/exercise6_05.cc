#include <iostream>
using std::cout; using std::endl;

int absval(int number)
{
    if (number < 0)
    {
        return -number;
    }
    return number;
}

int main()
{
    cout << "|-1|: " << absval(-1) << endl;
    cout << "|1|: " << absval(1) << endl;
    cout << "|-60|: " << absval(-60) << endl;
    cout << "|60|: " << absval(60) << endl;
    cout << "|-29|: " << absval(-29) << endl;
    cout << "|29|: " << absval(29) << endl;
}

