#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::cin; using std::cerr; using std::endl;
using std::string;

int main()
{
    string input;
    string last;
    if (!(cin >> last))
    {
        cerr << "No words entered." << endl;
        return -1;
    }

    while (cin >> input)
    {
        if (!isupper(input[0])) 
        {
            last = input;
            continue;
       
        }

        if (input == last) break;
        last = input;
    }

    if (cin) 
    {
        cout << "Word " << input << " entered twice." << endl;
    }
    else
    {
        cout << "No words were duplicated in sequence." << endl;
    }
}

