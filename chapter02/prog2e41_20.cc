/* 
 * Exercise 2.41.
 *
 * Revisit of Exercise 1.20.
 */
#include <iostream>
#include <string>

struct Sales_data 
{
    std::string book_no;
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
    std::cout << "Enter three book transactions in <ISBN> <# sales> <price>"
              << " format:" << std::endl;

    // Get the sales.
    std::cin >> book1.book_no >> book1.units_sold >> book1.revenue
             >> book2.book_no >> book2.units_sold >> book2.revenue
             >> book3.book_no >> book3.units_sold >> book3.revenue;

    // Calculate revenue from price.
    book1.revenue *= book1.units_sold;
    book2.revenue *= book2.units_sold;
    book3.revenue *= book3.units_sold;

    // Print summary data.
    std::cout << "    ISBN      | Total sales | Total Revenue" << std::endl 
              << book1.book_no << " |           " << book1.units_sold << " | " 
              << book1.revenue << std::endl
              << book2.book_no << " |           " << book2.units_sold << " | " 
              << book2.revenue << std::endl
              << book3.book_no << " |           " << book3.units_sold << " | "
              << book3.revenue
              << std::endl;
    return 0;
}

