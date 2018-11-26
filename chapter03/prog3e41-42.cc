#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::vector;
using std::begin; using std::end;

int main()
{
    constexpr size_t SIZE = 6;

    // Exercise 41
    int source[SIZE] = {1, 2, 3, 4, 5, 6};
    vector<int> vec(begin(source), end(source));

    // We could use vec.size() in a lot of compilers, but it's technically
    // illegal in C++11 as variable length arrays are not technically allowed.
    int dest[SIZE];

    // Get iterators for the array
    int *abeg = begin(dest), *aend = end(dest);

    for (auto it = vec.begin(); it != vec.end() && abeg != aend; ++it, ++abeg)
    {
        *abeg = *it;
    }

    cout << "Source array: [ ";
    for (auto i : source) cout << i << " ";
    cout << "]" << endl;

    cout << "...Used to initialize a vector: < ";
    for (auto i : vec) cout << i << " ";
    cout << ">" << endl;

    cout << "...Copied from the vector to another array: [ ";
    for (auto i : dest) cout << i << " ";
    cout << "]" << endl;
}

