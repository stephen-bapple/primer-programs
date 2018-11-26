#include <iostream>
using std::cout; using std::cin; using std::endl;

int main()
{
    int input;

    cout << "Enter a number or some numbers: ";
    while (cin >> input && input != 42)
    {
        cout << "You entered: " << input << " enter 42 to stop." << endl;
    }
    cout << "Bye." << endl;
}

