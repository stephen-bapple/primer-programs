#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::cerr;

#define printvec(vec) \
	for (auto e : vec) \
        {\
            cout << "[" << e << "]";\
	} cout << endl;
	                  
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
    for (decltype(numbers.size()) i = 0; i < numbers.size() - 1; i++)
    {
        cout << numbers[i] << " + " << numbers[i + 1] << " = "
	     << (numbers[i] + numbers[i + 1]) << endl;
    }
    cout << endl;

    // Part 2: sums of opposite elements:
    cout << "Sums of opposite elements:" << endl;
    for (decltype(numbers.size()) i = 0; i < numbers.size() / 2; i++)
    {
        cout << numbers[i] << " + " << numbers[numbers.size() - 1 - i] << " = "
	     << (numbers[i] + numbers[numbers.size() - 1 - i]) << endl;
    }
    if (numbers.size() % 2 != 0)
    {
        cout << "Middle element (nothing to sum with): "
             << numbers[numbers.size() / 2] << endl;
    }
    cout << endl;
}

