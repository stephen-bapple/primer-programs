#include <iostream>
#include <string>

using std::cout; using std::cin; using std::cerr; using std::endl;
using std::string;

/*
 * Exercise 3.28. What are the values of the following arrays?
 */
string sa[10]; // Default initialized: 10 empty strings..
int ia[10]; // Default. Outside a function -> 10 int 0's

int main()
{
    string sa2[10]; // Default. 10 empty strings.
    int ia2[10]; // Default. Inside a function -> 10 undefined ints.

    // Should all be empty.
    cout << "Contents of array sa:" << endl;
    for (auto element : sa)
    {
        cout << "<" << element << ">" << endl;
    } cout << endl;

    // Empty as well.
    cout << "Contents of array sa2:" << endl;
    for (auto element : sa2)
    {
        cout << "<" << element << ">" << endl;
    } cout << endl;

    // Zeros.
    cout << "Contents of array ia:" << endl;
    for (auto element : ia)
    {
        cout << "<" << element << ">" << endl;
    } cout << endl;

    // Undefined. Maybe zeros, maybe random numbers.
    cout << "Contents of array ia2:" << endl;
    for (auto element : ia2)
    {
        cout << "<" << element << ">" << endl;
    } cout << endl;
}
