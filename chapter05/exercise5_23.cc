#include <iostream>
#include <stdexcept>
using std::cout; using std::cin; using std::endl;

int main()
{
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2; 
    
    cout << num1 << " divided by " << num2 << " is: " << endl;
    cout << num1 / num2 << endl;
}

