#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2, book3;

    // Prompt user.
    std::cout << "Enter three book transactions in <ISBN> <# sales> <price>"
              << " format:" << std::endl;

    // Get the sales.
    std::cin >> book1 >> book2 >> book3;

    // Print summary data.
    std::cout << "ISBN / total sales / total revenue "
              << "/ average price per sale:" << std::endl;
    std::cout << book1 + book2 + book3 << std::endl;

    return 0;
}

