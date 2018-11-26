/* 
 * Exercise 2.42: Revisit of Exercise 2.41 / 1.25.
 */
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    /* 
     * Exercise 1.25 Revisited. 
     */

    Sales_data total; // Next transaction data.

    // Prompt user.
    std::cout << "Enter some trans transactions"
              << " in <ISBN> <# sales> <price> format:"
              << " (ctrl-d (unix) or (ctrl-z) (win) to quit)." << std::endl;

    // Get the sales.
    // Ensure we have at least 1 transaction.
    if (std::cin >> total.book_no 
                 >> total.units_sold
                 >> total.revenue)
    {
        Sales_data trans; // Running sum.

        // Get actual revenue from price and units sold.
        total.revenue *= total.units_sold;

        // Read the rest of the transactions.
        while (std::cin >> trans.book_no  >> trans.units_sold >> trans.revenue)
        {
            trans.revenue *= trans.units_sold;

            // Check if the trans is the same.
            if (trans.book_no == total.book_no)
            {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } 
            else 
            {
                std::cout << "ISBN / Total sold / Revenue: "
                          << total.book_no << " / " << total.units_sold
                          << " / " << total.revenue << std::endl; 
                total = trans;
            }
        }

        std::cout << "ISBN / Total sold / Revenue: "
                  << total.book_no << " / " << total.units_sold
                  << " / " << total.revenue << std::endl; 
        total = trans;
    }
    else // Inform the user if no transactions to process.
    {
        std::cerr << "No transactions to process." << std::endl;
        return -1; // Error.
    }

    return 0;
}

