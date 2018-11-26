#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;

int main()
{
    /* Exercise 4.33:
     *
     * Explain what the following expression does:
     * someValue ? ++x, ++y : --x, --y
     */

    bool someValue = true; // We would ideally want someValue to be boolean.
    int x(10), y(10);

    /* This expression is highly misleading because ?: binds
     * more tightly than the comma operator. The expr is 
     * equivalent to :
     *
     * (someValue ? ++x, ++y : --x), --y
     *
     * So --y is executed regardless of whether someValue is true or false
     * and the result of the expression will be the original value of y
     * or a decremented value of y.
     *
     * If someValue is true, x and then y are incremented in order,
     * the updated x is returned, but then discarded. Then y is decremented
     * and returned as the result of the entire expression.
     *
     * If someValue is false, x is decremented, returned, discarded,
     * then y is decremented and returned. 
     */

    cout << "--- Result if someValue = true -------------------------------\n";
    cout << "Before: ";
    cout << "x=" << x << ", y=" << y << endl;

    cout << "Overall return value= " << (someValue ? ++x, ++y : --x, --y) 
         << endl;
    cout << "After: ";
    cout << "x=" << x << ", y=" << y << endl;

    cout << endl
         << "--- Result if someValue = false -------------------------------\n";
    someValue = false; // Try false this time.
    x = 10, y = 10;    // Reset values.

    cout << "Before: ";
    cout << "x=" << x << ", y=" << y << endl;

    cout << "Overall return value= " << (someValue ? ++x, ++y : --x, --y)
         << endl; 
    cout << "After: ";
    cout << "x=" << x << ", y=" << y << endl;

}
