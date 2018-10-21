#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>

#define use using std::
use string; use getline;
use cout; use cin; use cerr; use endl;
#undef use

int main()
{
    /* This is perfectly legal. Since c is a reference type
     * and s is a const string auto will deduce c as a ref to const char
     * and the loop will not be able to modify the string.
     */
    const string s = "Keep out!";
    for (auto c : s) {/* ... */}
}

