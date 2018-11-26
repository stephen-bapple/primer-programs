#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::cerr;

#define printvec(vec) \
{\
cout << "<";\
auto it = vec.begin();\
while (it != vec.end())\
    {\
        cout << *it;\
        if (++it != vec.end()) cout << ", ";\
    }\
    cout << ">" << endl;\
}

int main()
{
    vector<int> numbers;
    int input;

    // Get input
    cout << "Enter some numbers to perform analysis on: ";
    while (cin >> input) numbers.push_back(input);

    // Exit if invalid.
    if (numbers.size() == 0)
    {
        cerr << "You need to actually enter some numbers for this program"
	        " to work!" << endl;
	return -1;
    }

    cout << "List of numbers entered: ";
    printvec(numbers);
 
    // Part 1: sum adjacent elements:
    cout << "Sums of adjacent elements:" << endl;
    for (auto it = numbers.begin(); it != numbers.end() - 1; it++)
    {
        auto a = *it, b = *(it + 1);
        cout << a << " + " << b << " = "
             << a + b << endl;

    }
    cout << endl;

    // Part 2: sums of opposite elements:
    cout << "Sums of opposite elements:" << endl;
    for (auto it = numbers.begin(), it2 = numbers.end() - 1; 
         it < it2; it++, it2--)
    {
        auto a = *it, b = *it2;
        cout << a << " + " << b << " = "
             << a + b << endl; 
    }
    if (numbers.size() % 2 != 0)
    {
        cout << "Middle element (nothing to sum with): "
             << *(numbers.begin() + (numbers.end() - numbers.begin()) / 2) 
             << endl;
    }
    cout << endl;
}

