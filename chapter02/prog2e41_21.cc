/* 
 * Exercise 2.41: Revisit of Exercise 1.21.
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
     * Exercise 1.21 Revisited. 
     */

    // The book transactions. 
    Sales_data book1, book2;

    // Prompt user.
    std::cout << "Enter two book transactions with the same ISBN "
              << " in <ISBN> <# sales> <price> format:" << std::endl;

    // Get the sales.
    std::cin >> book1.book_no >> book1.units_sold >> book1.revenue
             >> book2.book_no >> book2.units_sold >> book2.revenue;

    // Calculate revenue from price.
    book1.revenue *= book1.units_sold;
    book2.revenue *= book2.units_sold;

    // Ensure ISBNs are the same.
    if (book1.book_no !=  book2.book_no)
    {
        std::cout << "Error: Books need to have the same ISBN." << std::endl;
        return -1; // Error.
    }

    // Add the two books together.
    book1.units_sold += book2.units_sold;
    book1.revenue += book2.revenue;

    // Print summary data.
    std::cout << "    ISBN      | Total sales | Total Revenue" << std::endl 
              << book1.book_no << " |           " << book1.units_sold << " | " 
              << book1.revenue << std::endl;
    return 0;
}

