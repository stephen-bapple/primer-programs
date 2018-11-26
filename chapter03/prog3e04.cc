/*
 * Exercise 3.4.
 */

#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string; using std::getline;

int main()
{
    // Prompt user.
    cout << "Enter two strings, one on each line:" << endl;
    string first, second;
    getline(cin, first);
    getline(cin, second);

    // Check the lexicographic ordering of the strings.
    if (first == second)
    {
        cout << "The strings you entered are exactly the same." << endl;
        return 0; // That's all the analysis we need.
    }
    else if (first > second)
    {
        cout << "The first string you entered <" << first << "> is larger "
             << "(lexicographically) than the second string you entered <"
             << second << ">" << endl;
    } 
    else 
    {
        cout << "The second string you entered <" << second << "> is larger "
             << "(lexicographically) than the first string you entered <"
             << first << ">" << endl;
    }

    // If the strings aren't equal we'll also compare their length.
    cout << "Additionally..." << endl;

    if (first.size() == second.size())
    {
        cout << "The strings you entered have the same length." << endl;
    }
    else if (first.size() > second.size())
    {
        cout << "The first string you entered <" << first << "> is longer "
             << "than the second string you entered <" << second << ">" << endl;
    }
    else 
    {
        cout << "The second string you entered <" << second << "> is longer "
             << "than the first string you entered <" << first << ">" << endl;
    }

    return 0;
}

