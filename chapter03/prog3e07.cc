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

    // char & should be just fine. Although, if we took out the & we would
    // not be able to alter the original string.
    for (char &c : user_input)
    {
        c = toupper(c);
    }
    cout << "Your string in all uppercase is: " << user_input << endl;
}

