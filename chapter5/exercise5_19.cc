#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
    string a, b;
    cout << "This program gets two strings from the user and reports which one"
         << " is shorter. It terminates when Ctrl-D (unix) or Ctrl-Z (win)"
         << " is entered." << endl;
    do 
    {
        cout << "Enter two strings: ";
        if (cin >> a >> b) 
        {
            if (a.size() == b.size())
            {
                cout << "String <" << a << "> is equal in size to string <"
                     << b << ">" << endl;
            }
            else if (a.size() < b.size())
            {
                cout << "String <" << a << "> is shorter than string <"
                     << b << ">" << endl;
            }
            else // b.size() < a.size()
            {
                cout << "String <" << b << "> is shorter than string <"
                     << a << ">" << endl;
            }
        }

    } while (cin);
}

