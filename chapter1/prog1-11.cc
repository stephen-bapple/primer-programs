/*
 * Prompt user for two integers and then print all numbers in the range
 * between them (inclusive).
 *
 */

#include <iostream>

int main()
{
    int a, b = 0;

    // Prompt user.
    std::cout << "Please enter two integers: " << std::endl;
    std::cin >> a >> b;

    if (a < b)
    {
        while (a <= b)
        {
            std::cout << a << std::endl;
            a++;
        }
    }
    else
    {
        while (b <= a)
        {
            std::cout << b << std::endl;
            b++;
        }
    }

    return 0;
}

