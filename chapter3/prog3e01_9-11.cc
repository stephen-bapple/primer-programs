/*
 * Exercise 3.1 chp1. Rewrite of 1.9, 1.10, & 1.11.
 */

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
    // Exercise 1.9: sum the numbers 50 to 100 using while.
    int total = 0;
    int current_number = 50;
    while (current_number <= 100) total += current_number++;
    cout << "The sum of the numbers 50 - 100 is: " << total << endl;
    
    // Exercise 1.10: print the numbers from 10 to 0 using -- as the operator.
    current_number = 10;
    while (current_number >= 0) cout << current_number-- << endl;

    // Exercise 1.11: Print each number in user-spec'd range (inclusive).
    int low, high;
    cout << "Enter two numbers to print all the numbers in that range: ";
    cin >> low >> high;

    // Ensure high >= low
    if (high < low)
    {
        int temp = high;
        high = low;
        low = temp;
    }

    // Actually print the numbers
    while (low <= high) cout << low++ << endl;
}

