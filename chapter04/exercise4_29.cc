#include <iostream>
using std::cout; using std::endl;

int main()
{
    int x[10];
    int *p = x;

    /* This should print 10. This is because arrays do not decay to
     * pointers when used by sizeof. sizeof(x) will return the number
     * of elements in x multiplied by the size of int on the machine
     * (most likely 4 bytes in 2018) so 40. sizeof(*x) will degrade x
     * to a pointer and dereference it to get an int value, then return
     * the size of int on this machine.
     *
     * 10 * int width / int width = 10.
     */
    cout << sizeof(x) / sizeof(*x) << endl;

    /* Despite referring to the same object this expression
     * should print a very different value. p is explicitely
     * declared as an int pointer so sizeof(p) returns the size
     * of a pointer which is most likely to be the word size of
     * the machine.
     *
     * sizeof(*p) returns the size of what p points to, ints,
     * which is likely to be 32 in 2018.
     *
     * So the statement will likely print 2.
     * Unfortunately, this is somewhat meaningless aside from
     * illustrating how sizeof works.
     */
    cout << sizeof(p) / sizeof(*p) << endl;
}

