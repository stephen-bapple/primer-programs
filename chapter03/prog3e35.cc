#include <cstddef>
#include <iostream>

using std::cout; using std::endl;

int main()
{
    constexpr size_t SIZE = 50;
    int a[SIZE] = {22, 22, 22, 22, 22, 22,\
                 22, 22, 22, 22, 22, 22,\
                 22, 22, 22, 22, 22, 22,\
                 22, 22, 22, 22, 22, 22,\
                 22, 22, 22, 22, 22, 22};
    int *p1 = a;
    int *end = a + SIZE;

    while (p1 != end)
    {
        *p1++ = 0;
    }

    for (auto e : a)
    {
       cout << "<" << e << ">";
    
    }
    cout << endl;
}

