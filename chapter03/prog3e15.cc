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
    string text;
    vector<string> input;

    cout << "Enter some strings: ";
    while (cin >> text)
    {
        input.push_back(text);
    }

    cout << "You entered the following strings: " << endl;
    for (decltype(input.size()) index = 0; index < input.size() - 1; index++)
    {
        cout << input[index] << ", ";
    }
    cout << input[input.size() - 1] << "." << endl;
}

