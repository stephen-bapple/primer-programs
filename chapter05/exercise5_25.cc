#include <iostream>
#include <stdexcept>
#include <climits>
using std::cout; using std::cin; using std::endl;

int main()
{
    while (true)
    {
        int num1, num2;
        try 
        {
            cout << "Enter two integers: ";
            cin >> num1 >> num2; 
    
            if (num2 == 0 )
            {
                throw std::runtime_error("Cannot divide by 0.");
            }
                cout << num1 << " divided by " << num2 << " is: " 
                     << num1 / num2 << endl;
            break;
        }
        catch (std::runtime_error e)
        {
            cout << "Error encountered:\n"
                 << e.what() << "\n"
                 << "Please try again.\n" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
    }

}

