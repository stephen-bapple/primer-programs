/* 
 * Exercise 3.38: In this section, we noted that it was not only illegal but
 *                meaningless to try to add two pointers. Why would adding 
 *                two pointers be meaningless?
 */

#include <cstddef>
#include <iostream>
using std::cout; using std::endl;

int main()
{

    /*
     * Adding two pointers is meaningless because pointers are addresses.
     * The difference between two pointers is meaningful as it gives an offset
     * telling us something about how to get from one pointer to the other,
     * but adding two points gives us an address that probably doesn't point
     * to any real object.
     *
     * i.e. if we have obj a at address 4 and obj b at address 8
     * b - a gives 4, the offset from a to b so a + 4 = b, a - b gives -4,
     * the offset from b to a so b - 4 = a, but a + b gives 12, which isn't the
     * address of any object involved in these calculations.
     */
    int a[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int b[10] = {-2, -2, -2, -2, -2, -2, -2, -2, -2, -2};

    cout << "Address of a: " << a << endl;
    cout << "Address of b: " << b << endl;
    
    // Black magic to get around restrictions adding pointers.
    int *z = 0;
    int *ptr = a; 
    ptrdiff_t boff = b - z;
    ptr += boff;

    // This will likely result in a segfault:
    cout << "Adress of a + adress of b: " << ptr << endl;
    cout << "Attempting to access object at &a + &b: " << endl;
    cout << *ptr << endl;
}

