#include <iostream>
#include <stdexcept>
using std::cout; using std::cin; using std::endl;

int main()
{
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2; 
    
    if (num2 == 0 )
    {
        throw std::runtime_error("Cannot divide by 0.");
    }
    cout << num1 << " divided by " << num2 << " is: " << endl;
    cout << num1 / num2 << endl;
}

