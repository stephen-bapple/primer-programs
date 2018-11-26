#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current_book, book;

    // Instructions
    std::cout << "Enter some book transactions in <ISBN> <# sales> <price>"
              << " format: (ctrl-d (unix) or ctrl-z (win) to quit.)" << std::endl;

    // Get the sales.
    if (std::cin >> current_book) // Make sure we have at least 1 transaction.
    {
        int cnt = 1;

        // Read all subsequent transactions.
        while (std::cin >> book)
        {
            if (book.isbn() == current_book.isbn())
            {
                current_book += book;
                cnt++;
            }
            else
            {
                std::cout << "There were " << cnt << " transactions for "
                          << "the book with an ISBN of " << current_book.isbn()
                          << std::endl;
                current_book = book;
                cnt = 1;
            }
        }
        std::cout << "There were " << cnt << " transactions for "
                  << "the book with an ISBN of " << current_book.isbn()
                  << std::endl;

    }
    else // If there are no transactions inform the user.
    {
        std::cout << "No transactions to process." << std::endl;
    }

    return 0;
}

