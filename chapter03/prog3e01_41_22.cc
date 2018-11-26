/* 
 * Exercise 2.41: Revisit of Exercise 1.22..
 */
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::cerr;
using std::endl; using std::string;

struct Sales_data 
{
    string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0; // double for currency? Obscene!
};

int main()
{
    /* 
     * Exercise 1.22 Revisited. 
     */

    // The book transactions. 
    Sales_data current_book, book;

    // Prompt user.
    cout << "Enter some book transactions with the same ISBN"
              << " in <ISBN> <# sales> <price> format:"
              << " (ctrl-d (unix) or (ctrl-z) (win) to quit)." << endl;

    // Get the sales.
    // Ensure we have at least 1 transaction.
    if (cin >> current_book.book_no 
                 >> current_book.units_sold
                 >> current_book.revenue)
    {
        // Get actual revenue from price and units sold.
        current_book.revenue *= current_book.units_sold;

        // Read the rest of the transactions.
        while (cin >> book.book_no  >> book.units_sold >> book.revenue)
        {
            // Exit program if the user enters a non-matching ISBN.
            if (book.book_no != current_book.book_no)
            {
                cerr << "Error: ISBNs must match." << endl;
                return -1;
            }
            
            book.revenue *= book.units_sold;

             current_book.units_sold += book.units_sold;
             current_book.revenue += book.revenue;
        }

        // Print summary data after reading all books.
        cout << "    ISBN      | Total sales | Total Revenue" << endl 
                  << current_book.book_no << " |           " 
                  << current_book.units_sold << " | " 
                  << current_book.revenue << endl;

    }
    else // Inform the user if no transactions to process.
    {
        cerr << "No transactions to process." << endl;
        return -1; // Error.
    }

    return 0;
}

