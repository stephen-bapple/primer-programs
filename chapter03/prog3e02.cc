/*
 * Exercise 3.2.
 *
 */

#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string; using std::getline;

int main()
{
    cout << "Type 'quit' to go to next part." << endl;

    // Read one line of standard input at a time
    string line;
    cout << "Reading one line of input at a time." << endl;
    while (true) 
    {
        getline(cin, line); if (line == "quit") break;
        cout << "Read line: <" << line << ">" << endl;
    }

    // Read one word of standard input at a time
    string word;
    cout << "Reading one word of input at a time." << endl;
    while (true) 
    {
        cin >> word; if (word == "quit") break;
        cout << "Read word: <" << word << ">" << endl;
    }
    return 0;
}

