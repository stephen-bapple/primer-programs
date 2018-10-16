/* 
 * Exercise 2.41: Revisit of Exercise 1.25.
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
     * Exercise 1.25 Revisited. 
     */

    Sales_data total; // Next transaction data.

    // Prompt user.
    cout << "Enter some trans transactions"
              << " in <ISBN> <# sales> <price> format:"
              << " (ctrl-d (unix) or (ctrl-z) (win) to quit)." << endl;

    // Get the sales.
    // Ensure we have at least 1 transaction.
    if (cin >> total.book_no 
                 >> total.units_sold
                 >> total.revenue)
    {
        Sales_data trans; // Running sum.

        // Get actual revenue from price and units sold.
        total.revenue *= total.units_sold;

        // Read the rest of the transactions.
        while (cin >> trans.book_no  >> trans.units_sold >> trans.revenue)
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
                cout << "ISBN / Total sold / Revenue: "
                          << total.book_no << " / " << total.units_sold
                          << " / " << total.revenue << endl; 
                total = trans;
            }
        }

        cout << "ISBN / Total sold / Revenue: "
                  << total.book_no << " / " << total.units_sold
                  << " / " << total.revenue << endl; 
        total = trans;
    }
    else // Inform the user if no transactions to process.
    {
        cerr << "No transactions to process." << endl;
        return -1; // Error.
    }

    return 0;
}

