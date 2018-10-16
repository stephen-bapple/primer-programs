#include <iostream>

int main()
{
    // currVal is the number we're counting; we'll read new values into val.
    int currVal = 0, val = 0;
    // read first number and esnure that we have data to process
    if (std::cin >> currVal)
    {
        int cnt = 1; // Store the count for the current value we're processing.
        // Read the remaining numbers:
        while (std::cin >> val)
        {
            // Increment count if the values are the same.
            if (val == currVal)
            {
                ++cnt; 
            }
            else // Otherwise, print the count for the previous value
            {
                std::cout << currVal << " occurs "
                          << cnt << " times." << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        // Print final count
        std::cout << currVal << " occurs "
                  << cnt << " times." << std::endl;
    }

    return 0;
}

