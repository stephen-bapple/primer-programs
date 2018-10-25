#include <iostream>

int main()
{
    /* Exercise 3.34: Given that p1 and p2 point to elements in the same array
     * what does the following code do? Are there values of p1 or p2 that make
     * this code illegal?
     *
     * > p1 += p2 - p1;
     *
     * The code simply moves p1 to point to the same element as p2.
     * This is because we first get the difference between p1 and p2 with p2-p1,
     * then we add this difference to p1 using +=, 
     * which we can do because ptrdiff_t is an integer type.
     * Because it is also signed, it doesn't matter if p1 comes before p2 or 
     * vice-versa.
     *
     * Therefore, no values will make it illegal as long as p1 and p2 point 
     * to elements in the same array, which is assumed in the problem statement.
     */
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p1 = a;
    int *p2 = &a[9];

    std::cout << "p1= " << p1 << ", *p1= " << *p1 << std::endl;
    std::cout << "p2= " << p2 << ", *p2= " << *p2 <<std::endl;

    std::cout << "Moving p1..." << std::endl;
    p1 += p2 - p1;

    std::cout << "p1= " << p1 << ", *p1= " << *p1 << std::endl;
    std::cout << "p2= " << p2 << ", *p2= " << *p2 << std::endl;
}

