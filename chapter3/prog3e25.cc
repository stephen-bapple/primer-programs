#include <iostream>
#include <vector>

#define printvec(vec) \
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

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto beg = scores.begin();

    while (cin >> grade)
    {
        if (grade <= 100)
        {
            (*(scores.begin() + (grade / 10)))++;
        }
    }
    printvec(scores);
}

