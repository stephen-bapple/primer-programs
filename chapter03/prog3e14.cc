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
    int number;
    vector<int> input;

    cout << "Enter some numbers: ";
    while (cin >> number)
    {
        input.push_back(number);
    }

    cout << "You entered the following values: " << endl;
    for (decltype(input.size()) index = 0; index < input.size() - 1; index++)
    {
        cout << input[index] << ", ";
    }
    cout << input[input.size() - 1] << "." << endl;
}

