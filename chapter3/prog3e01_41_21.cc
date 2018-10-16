/* 
 * Exercise 2.41: Revisit of Exercise 1.21.
 */
#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

struct Sales_data 
{
    string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0; // double for currency? Obscene!
};

int main()
{
    /* 
     * Exercise 1.21 Revisited. 
     */

    // The book transactions. 
    Sales_data book1, book2;

    // Prompt user.
    cout << "Enter two book transactions with the same ISBN "
              << " in <ISBN> <# sales> <price> format:" << endl;

    // Get the sales.
    cin >> book1.book_no >> book1.units_sold >> book1.revenue
             >> book2.book_no >> book2.units_sold >> book2.revenue;

    // Calculate revenue from price.
    book1.revenue *= book1.units_sold;
    book2.revenue *= book2.units_sold;

    // Ensure ISBNs are the same.
    if (book1.book_no !=  book2.book_no)
    {
        cout << "Error: Books need to have the same ISBN." << endl;
        return -1; // Error.
    }

    // Add the two books together.
    book1.units_sold += book2.units_sold;
    book1.revenue += book2.revenue;

    // Print summary data.
    cout << "    ISBN      | Total sales | Total Revenue" << endl 
              << book1.book_no << " |           " << book1.units_sold << " | " 
              << book1.revenue << endl;
    return 0;
}

