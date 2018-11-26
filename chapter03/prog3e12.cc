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

int main()
{
    // (a): Legal. vector of int vectors. Default initialized to empty.
    vector<vector<int>> ivec;

    // (b): Not legal. vector of ints is not convertible to string.
    //vector<string> svec = ivec;

    // (c): Legal. Vector of 10 strings all with the value "null".
    vector<string> svec(10, "null");
    for (auto s : svec) cout << s << " ";
    cout << endl;
}

