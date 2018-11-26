#include <iostream>

int main()
{
    int val = 0;
    int total = 0;

    std::cout << "Enter some numbers (ctrl-d to quit):" << std::endl;

    while (std::cin >> val)
    {
        total += val;
    }

    std::cout << "The sum of all entered numbers is: " << total << std::endl;

    return 0;
}

