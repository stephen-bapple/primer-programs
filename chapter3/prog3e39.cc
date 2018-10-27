#include <string>
#include <iostream>
#include <cstring>

using std::cout; using std::endl; using std::string;

int compare_str(const string &a, const string &b)
{
    // Check every character in the same position.
    auto ait = a.begin(), bit = b.begin();
    while (ait != a.end() && bit != b.end()) 
    {
        if (*ait < *bit)
        {
            return -1;
        }
        else if (*ait > *bit)
        {
            return 1;
        }
        ait++, bit++;
    }

    /* 
     * Strings will have an equal substring up to the end of one
     * or both strings at this point. We need to check if one string
     * is longer:
     */
    if (ait != a.end()) // Check if a longer than b.
    {
        return 1;
    }
    else if (bit != b.end()) // Check if b longer than a
    {
        return -1;
    }
    else // Strings are identical.
    {
        return 0;
    }
}

int compare_cstr(const char *a, const char *b)
{
    // Check every character in the same position.
    while (*a != '\0' && *b != '\0')
    {
        if (*a < *b)
        {
            return -1;
        }
        else if (*a > *b)
        {
            return 1;
        }
        a++;
        b++;
    }

    /* 
     * Strings will have an equal substring up to the end of one
     * or both strings at this point. We need to check if one string
     * is longer:
     */
    if (*a != '\0') // Check if a longer than b.
    {
        return 1;
    } 
    else if (*b != '\0') // Check if b longer than a
    {
        return -1;
    }
    else // Strings are identical.
    {
        return 0;
    }
}

int main()
{
    string ca = "123";
    string cb = "123";
    string cc = "1234";
    string ce = "234";

    const char *a = "123";
    const char *b = "123";
    const char *c = "1234";
    const char *e = "234";

    cout << "Note that values may not be -1/+1 and any -/+ value is acceptable"
         << endl; 

    // a vs b
    cout << "C++ 0: " << compare_str(ca, cb)
         << " vs " << ca.compare(cb) << endl;
    cout << "C__ 0: " << compare_cstr(a, b)
         << " vs " << strcmp(a, b) << endl;

    // a vs c
    cout << "C++ -1: " << compare_str(ca, cc)
         << " vs " << ca.compare(cc) << endl;
    cout << "C__ -1: " << compare_cstr(a, c)
         << " vs " << strcmp(a, c) << endl;

    // a vs e 
    cout << "C++ -1: " << compare_str(ca, ce)
         << " vs " << ca.compare(ce) << endl;
    cout << "C__ -1: " << compare_cstr(a, e)
         << " vs " << strcmp(a, e) << endl;

    /* Now reverse everything. */

    // b vs a
    cout << "C++ 0: " << compare_str(cb, ca)
         << " vs " << cb.compare(ca) << endl;
    cout << "C__ 0: " << compare_cstr(b, a)
         << " vs " << strcmp(b, a) << endl;

    // c vs a
    cout << "C++ +1: " << compare_str(cc, ca)
         << " vs " << cc.compare(ca) << endl;
    cout << "C__ +1: " << compare_cstr(c, a)
         << " vs " << strcmp(c, a) << endl;

    // e vs a 
    cout << "C++ +1: " << compare_str(ce, ca)
         << " vs " << ce.compare(ca) << endl;
    cout << "C__ +1: " << compare_cstr(e, a)
         << " vs " << strcmp(e, a) << endl;

}

