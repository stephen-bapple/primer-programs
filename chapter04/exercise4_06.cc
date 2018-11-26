#include <iostream>
using std::cout; using std::endl;

bool is_even(int value)
{
    if (value % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    cout << "Is 4 even? " << is_even(4) << endl;
    cout << "Is 3 even? " << is_even(3) << endl;
    cout << "Is -4 even? " << is_even(-4) << endl;
    cout << "Is -3 even? " << is_even(-3) << endl;
    cout << "Is 0 even? " << is_even(0) << endl; 
    cout << "Is -0 even? " << is_even(-0) << endl;
}

