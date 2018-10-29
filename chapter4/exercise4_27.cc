#include <iostream>
using std::cout; using std::endl;

int main()
{
    /** Exercise 4.27 **/
    unsigned long ul1 = 3, ul2 = 7;

    /* (a): ul1 & ul2
     *
     * 3 = 0...011 and 7 = 0...0111
     * so 3 & 7 = 011 & 111 = 011 = 3
     */
    cout << "Result: " << (ul1 & ul2) << ", expected: " << 3UL << endl;

    /* (b): ul1 | ul2
     *
     * 3 | 7 = 011 | 111 = 111 = 7
     */
    cout << "Result: " << (ul1 | ul2) << ", expected: " << 7UL << endl;

    /* (c): ul1 && ul2
     * 
     * Note: logical and. ul1 and ul2 are both non-zero so they are
     * treated as truthy values.
     * Ergo: ul1 && ul2 -=> 1/true
     */
    cout << "Result: " << (ul1 && ul2) << ", expected: " << true << endl;

    /* (d): ul1 || ul2
     *
     * Logical or. ul1 and ul2 are non-zero and thus both truthy.
     * ul1 || ul2 -=> true
     *
     */
    cout << "Result: " << (ul1 || ul2) << ", expected: " << true << endl;
}

