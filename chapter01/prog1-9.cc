/*
 * Sum the numbers from 50 to 100.
 *
 */

#include <iostream>

int main()
{
    int val = 50;
    int sum = 0;

    // Sum all values.
    while (val <= 100)
    {
        sum += val;
        val++;
    }

    // Output result.
    std::cout << "The sum of all numbers from 50 to 100 is " << sum << std::endl;

    return 0;
}

