/* 
 * Exercise 3.1
 *
 * Exercise 2.41 which is a revisit of Exercise 1.20.
 */
#include <iostream>
#include <string>

using std::string; using std::cout; using std::cin; using std::endl;

struct Sales_data 
{
    string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0; // double for currency? Obscene!
};

int main()
{
    /* 
     * Exercise 1.20 Revisited. 
     */

    // The book transactions. 
    Sales_data book1, book2, book3;

    // Prompt user.
    cout << "Enter three book transactions in <ISBN> <# sales> <price>"
              << " format:" << endl;

    // Get the sales.
    cin >> book1.book_no >> book1.units_sold >> book1.revenue
             >> book2.book_no >> book2.units_sold >> book2.revenue
             >> book3.book_no >> book3.units_sold >> book3.revenue;

    // Calculate revenue from price.
    book1.revenue *= book1.units_sold;
    book2.revenue *= book2.units_sold;
    book3.revenue *= book3.units_sold;

    // Print summary data.
    cout << "    ISBN      | Total sales | Total Revenue" << endl 
              << book1.book_no << " |           " << book1.units_sold << " | " 
              << book1.revenue << endl
              << book2.book_no << " |           " << book2.units_sold << " | " 
              << book2.revenue << endl
              << book3.book_no << " |           " << book3.units_sold << " | "
              << book3.revenue
              << endl;
    return 0;
}

