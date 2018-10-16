/* 
 * Exercise 2.41: Revisit of Exercise 1.23/24.
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
     * Exercise 1.23/24 Revisited. 
     */

    // The book transactions. 
    Sales_data current_book, book;

    // Prompt user.
    cout << "Enter some book transactions"
              << " in <ISBN> <# sales> <price> format:"
              << " (ctrl-d (unix) or (ctrl-z) (win) to quit)." << endl;

    // Get the sales.
    // Ensure we have at least 1 transaction.
    if (cin >> current_book.book_no 
                 >> current_book.units_sold
                 >> current_book.revenue)
    {
        int cnt = 1;

        // Get actual revenue from price and units sold.
        current_book.revenue *= current_book.units_sold;

        // Read the rest of the transactions.
        while (cin >> book.book_no  >> book.units_sold >> book.revenue)
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
                cout << "There were " << cnt << " transactions for"
                          << " the book with ISBN " << current_book.book_no
                          << endl;
                current_book = book;
                cnt = 1;
            }
        }

        cout << "There were " << cnt << " transactions for"
                  << " the book with ISBN " << current_book.book_no
                  << endl;
    }
    else // Inform the user if no transactions to process.
    {
        cerr << "No transactions to process." << endl;
        return -1; // Error.
    }

    return 0;
}

