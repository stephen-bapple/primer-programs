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
    // while loop version
    string input, original;
    cout << "Enter a string: ";
    getline(cin, input);
    original = input; // Copy.

    decltype(input.size()) index = 0;

    while (index < input.size())
    {
        input[index] = toupper(input[index]);
        index++;
    }
    cout << "Your string in all uppercase is: " << input << endl;

    // Traditional for loop version
    input = original;
    for (decltype(input.size()) index = 0; index < input.size(); index++)
    {
        input[index] = toupper(input[index]);
    }
    cout << "Your string in all uppercase is: " << input << endl;
}

