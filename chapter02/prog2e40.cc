/* 
 * Note that this file is intended to not compile. 
 */
#include <string>

struct Sales_data 
{
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0; // double for currency? Obscene!
};

int main()
{
    return 0;
}

