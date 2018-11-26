#include <iostream>
#include <string>

#define use using std::
use string;
use cout;
use cin;
use cerr;
use endl;

int main()
{
    const string hex_symbols = "0123456789ABCDEF";
    string result;
    string::size_type number;
    unsigned remainder;

    cout << "Enter a number to convert to hexadecimal: ";
    cin >> number;

    if (number == 0)
    {
        result = "0";
    }
    while (number > 0)
    {
        remainder = number % 16;
        number /= 16;

        if (remainder < hex_symbols.size())
        {
            result = hex_symbols[remainder] + result;
        }
        else
        {
            cout << "This should never happen. any number % 16 should "
                 << "be less than 16. Something terribly wrong has occurred... "
                 << endl;
            return -1; // Something is terribly wrong...
        }
    }

    // Print results:
    cout << "Your number in hex is: " << result << endl;
}

