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
    /* The following code is not legal. 
     * This is because the default initializer for vector results in
     * in an empty vector and subscripting a location that does not
     * exist is undefined. It will compile but probably not work correctly.
     */
//   vector<int> ivec;
//   ivec[0] = 42;

    /* It can easily be fixed by changing the second line to use push_back
     * instead to add an element (as was likely intended.) */
    vector<int> ivec;
    ivec.push_back(42);

    for (auto e : ivec) cout << "[" << e << "]";
    cout << endl;
}
