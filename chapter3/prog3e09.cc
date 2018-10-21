#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>

#define use using std::
use string;
use cout;
use cin;
use cerr;
use endl;
use getline;
#undef use

int main()
{
    /* 
     * This program is not valid in that it has undefined behavior.
     * It will compile though. It tries to access the first character of
     * an empty string, which is undefined according to the book, since an empty
     * string has no characters.
     */
    string s; // Valid. string has a default initializer to the empty string.
    cout << s[0] << endl; // Undefined behavior

    // However, according to cplusplus.com the result of accessing s[s.size()]
    // is the null character '\0' as of C++11.
    cout << "Size of s: " << s.size() << endl << "s[0]: ";
    if (s[0] == '\0') cout << " Null character." << endl;
}

