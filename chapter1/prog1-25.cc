#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;

    // Instructions
    std::cout << "Enter some trans transactions in <ISBN> <# sales> <price>"
              << " format: (ctrl-d (unix) or ctrl-z (win) to quit.)" << std::endl;

    // Get the sales.
    if (std::cin >> total) // Make sure we have at least 1 transaction.
    {
        Sales_item trans;

        // Read all subsequent transactions.
        while (std::cin >> trans)
        {
            if (trans.isbn() == total.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;

    }
    else // If there are no transactions inform the user.
    {
        std::cerr << "No transactions to process." << std::endl;
        return -1; // Program failed to process data.
    }

    return 0;
}

