/* 
 * Exercise 2.42: Revisit of Exercise 2.41 and 1.23/24.
 */
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    /* 
     * Exercise 1.23/24 Revisited. 
     */

    // The book transactions. 
    Sales_data current_book, book;

    // Prompt user.
    std::cout << "Enter some book transactions"
              << " in <ISBN> <# sales> <price> format:"
              << " (ctrl-d (unix) or (ctrl-z) (win) to quit)." << std::endl;

    // Get the sales.
    // Ensure we have at least 1 transaction.
    if (std::cin >> current_book.book_no 
                 >> current_book.units_sold
                 >> current_book.revenue)
    {
        int cnt = 1;

        // Get actual revenue from price and units sold.
        current_book.revenue *= current_book.units_sold;

        // Read the rest of the transactions.
        while (std::cin >> book.book_no  >> book.units_sold >> book.revenue)
        {
            book.revenue *= book.units_sold;

            // Check if the book is the same.
            if (book.book_no == current_book.book_no)
            {
                current_book.units_sold += book.units_sold;
                current_book.revenue += book.revenue;
                cnt++;
            } 
            else 
            {
                std::cout << "There were " << cnt << " transactions for"
                          << " the book with ISBN " << current_book.book_no
                          << std::endl;
                current_book = book;
                cnt = 1;
            }
        }

        std::cout << "There were " << cnt << " transactions for"
                  << " the book with ISBN " << current_book.book_no
                  << std::endl;
    }
    else // Inform the user if no transactions to process.
    {
        std::cerr << "No transactions to process." << std::endl;
        return -1; // Error.
    }

    return 0;
}

