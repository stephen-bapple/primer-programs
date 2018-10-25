#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>

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
using std::string;

int main()
{
    vector<string> text(50, "<placeholder>");
    string sought = "nonexistant";

    // Binary search algorithm.
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg)/2;

    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
        mid = beg + (end - beg)/2;
    }
    /* The reason that we write mid = beg + (end - beg) / 2;
     * instead of mid = (beg + end)/2; is because there is no '/' 
     * operator for iterators and the result of
     * (end - beg)/2 is an integral type: 
     */
    cout << typeid(((end - beg)/2)).name() << endl;
    cout << typeid(end).name();

    // Trying to assign the integral type to an iterator is a compiler error:
    //mid = (end - beg)/2;

    // So we need to add the 'beg + ' because string/vector iterators have the
    // '+' operator and the result of adding the integral type is an
    // iterator.
}

