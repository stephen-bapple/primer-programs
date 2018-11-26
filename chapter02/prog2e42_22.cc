/* 
 * Exercise 2.42: Revisit of Exercise 2.41 / 1.22.
 */
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    /* 
     * Exercise 1.22 Revisited. 
     */

    // The book transactions. 
    Sales_data current_book, book;

    // Prompt user.
    std::cout << "Enter some book transactions with the same ISBN"
              << " in <ISBN> <# sales> <price> format:"
              << " (ctrl-d (unix) or (ctrl-z) (win) to quit)." << std::endl;

    // Get the sales.
    // Ensure we have at least 1 transaction.
    if (std::cin >> current_book.book_no 
                 >> current_book.units_sold
                 >> current_book.revenue)
    {
        // Get actual revenue from price and units sold.
        current_book.revenue *= current_book.units_sold;

        // Read the rest of the transactions.
        while (std::cin >> book.book_no  >> book.units_sold >> book.revenue)
        {
            // Exit program if the user enters a non-matching ISBN.
            if (book.book_no != current_book.book_no)
            {
                std::cerr << "Error: ISBNs must match." << std::endl;
                return -1;
            }
            
            book.revenue *= book.units_sold;

             current_book.units_sold += book.units_sold;
             current_book.revenue += book.revenue;
        }

        // Print summary data after reading all books.
        std::cout << "    ISBN      | Total sales | Total Revenue" << std::endl 
                  << current_book.book_no << " |           " 
                  << current_book.units_sold << " | " 
                  << current_book.revenue << std::endl;

    }
    else // Inform the user if no transactions to process.
    {
        std::cerr << "No transactions to process." << std::endl;
        return -1; // Error.
    }

    return 0;
}

