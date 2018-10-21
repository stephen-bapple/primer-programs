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
    string user_input;
    cout << "Enter a string: ";
    getline(cin, user_input);

    for (auto &c : user_input)
    {
        c = toupper(c);
    }
    cout << "Your string in all uppercase is: " << user_input << endl;
}

