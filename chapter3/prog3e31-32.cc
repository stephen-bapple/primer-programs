#include <cstddef>
#include <iostream>
#include <vector>

#define printa(a, size)\
{\
    cout << "[";\
    for (size_t i = 0; i < size - 1; i++)\
    {\
        cout << a[i] << ", ";\
    }\
    cout << a[size - 1] << "]" << endl;\
}

using std::cout; using std::cin; using std::endl;
using std::vector;
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];

    // Exercise 3.31
    int increment = 0;
    for (auto &a : ia)
    {
        a = increment++;
    }
    printa(ia, array_size);

    // Exercise 3.32
    // Part 1: Copy array to another array.
    int ib[array_size];
    for (size_t i = 0; i < array_size; i++) ib[i] = ia[i];

    // Part 2: Rewrite program to use vectors
    // Honestly, I have no clue whether the book means to rewrite the copy
    // part or the original program part. So here's both:

    // Give each element the same value as its position.
    size_t size = 10;
    vector<int> iv;
    increment = 0;
    while (increment < size) iv.push_back(increment++);

    vector<int> acopy(ia, ia + array_size);
    for (auto a : acopy)
    {
        cout << "<" << a << ">";
    
    }
    cout << endl;

}

