#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
#include <vector>

#define use using std::
use string; use getline;
use cout; use cin; use cerr; use endl;
use vector;
#undef use

#define printv(v) \
{\
cout << "<";\
auto it = vec.begin();\
while (it != vec.end())\
    {\
        cout << *it;\
        if (++it != vec.end()) cout << ", ";\
    }\
    cout << ">" << endl;\
}


int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 1};

    cout << "The original vector is:" << endl;
    printv(vec);

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        *it *= 2;
    }

    cout << "The resulting vector is:" << endl;
    printv(vec);
}

