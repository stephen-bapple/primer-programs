#include <iostream>
#include <string>
#include <cstddef>
using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
    /* Exercise 5.16:
     *
     * Write an idiomatic for and while loop then rewrite
     * each using the other construct.
     */

    // Idiomatic for loop:
    constexpr size_t SZ = 5;
    int a[SZ]{0, 1, 2, 3, 4};

    cout << "[ ";
    for (size_t i = 0; i != SZ; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "]" << endl;

    // Rewritten as a while loop:
    // Wrapped in a block statement included to limit scope of i in the same
    // manner as the for loop does.
    {
        cout << "[ ";
        size_t i = 0;
        while (i != SZ)
        {
            cout << a[i] << " ";
            ++i;
        }
        cout << "]" << endl;
    }

    // Idiomatic while loop:
    string input;
    while (cin >> input)
    {
        cout << "Entered string: <" << input << ">" << endl;
    }

    // Rewritten as a for loop:
    for (string input; cin >> input;)
    {
        cout << "Entered string: <" << input << ">" << endl;
    }

    /* Exercise 5.16
     * Question: If you could use only one loop, which would you choose; why?
     *
     * I would choose the for loop because it offers more flexibility than the
     * while loop. Additionally, rewriting while loops to for loops results in
     * cleaner looking loops than rewriting for loops to while loops.
     */
}
