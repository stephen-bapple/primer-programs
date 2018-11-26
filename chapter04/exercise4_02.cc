#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

int main()
{

    vector<int> vec{1, 2, 3, 4};

    // Parenthesize: * vec.begin()
    cout << *((vec.begin)()) << " |vs| " << * vec.begin() << endl;

    // Parenthesize: * vec.begin()
    cout << (*((vec.begin)())) + 1 << " |vs| " << *vec.begin() + 1 << endl;
}

