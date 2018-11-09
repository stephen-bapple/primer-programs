#include <iostream>

using std::cout; using std::endl;

int main()
{
    /* Exercise 5.3:
     * Rewrite the following while loop using the comma operator
     * and without using a block.
     *
     * while (val <= 10)
     * {
     *     sum += val; 
     *     ++val;
     * }
     */
    int val(0), sum(0);

    while (val <= 10)
        sum +=val, ++val;

    cout << "Sum: " << sum << endl;
    /* Q:
     * Explain whether this rewrite improves or diminishes
     * the readability of this code.
     *
     * A:
     * The rewrite diminishes the readability of the code in my opinion.
     * The addition of the comma operator requires more thought on the
     * part of the programmer to parse what is happening. 
     * 
     * The block clearly delineates what is contained within the while loop
     * and requires no thought for most programmers as with the exception of
     * beginners the vast majority are familiar with blocks.
     *
     * Furthermore, the comma operator is less well known than the block
     * statement and more programmers will be unfamiliar with it.
     *
     * In this programmer's opinion, blocks should always follow loops
     * even if they contain only one statement.
     */
}

