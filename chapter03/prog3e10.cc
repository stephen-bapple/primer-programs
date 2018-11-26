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
    string input, result;
    cout << "Enter a string to process, include some punctuation." << endl;
    getline(cin, input);

    for (auto &c : input)
    {
        if (!ispunct(c)) result += c;
    }
    cout << "Your string with all punctuation removed: " << result << endl;
}

