#include <iostream>
using std::cout; using std::endl;

int generator()
{
    static int ret = 0;
    return ret++;
}

int main()
{
    for (int i = 0; i != 10; ++i)
    {
        cout << generator() << endl;
    }
}

