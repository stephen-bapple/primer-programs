#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current_book, book;

    // Instructions
    std::cout << "Enter some book transactions with the same ISBN"
              << " in <ISBN> <# sales> <price>"
              << " format: (ctrl-d (unix) or ctrl-z (win) to quit.)" 
              << std::endl;

    // Get the sales.
    if (std::cin >> current_book) // Make sure we have at least 1 transaction.
    {
        // Read all subsequent transactions.
        while (std::cin >> book)
        {
            current_book += book;
        }
    
       // Print summary data.
       std::cout << "ISBN / total sales / total revenue "
                << "/ average price per sale:" << std::endl;
       std::cout << current_book << std::endl;
    }
    else
    {
        // If no data, inform the user.
        std::cout << "No transactions to process." << std::endl;
    }

    return 0;
}

