#include <iostream>

using std::cout; using std::endl;

int get_value()
{
    return 0; // Dummy method.
}

int main()
{
    int ival(1), ival1(30), ival2(50), minval(5), occurs(0);

    /* Exercise 5.7
     *
     * Correct the errors in each of the following code fragment:
     */

    /* (a):
     * if (ival1 != ival2)
     *     ival1 = ival2
     * else ival1 = ival2 = 0;
     *
     * The only error in this code is that the assignment inside the if
     * is missing a semicolon, but curly braces should be added as well
     * for good practice and readability:
     */
    if (ival1 != ival2)
    {
        ival1 = ival2;
    }
    else
    {
        ival1 = ival2 = 0;
    }

    /* (b):
     * if (ival < minval)
     *     minval = ival;
     *     occurs = 1;
     *
     * The indentation here indicates occurs should be set to 1
     * if ival is less than minval, but it actually is set regardless
     * because only the first statement is associated with the if.
     *
     * It can be fixed by replacing the ; after the first statement
     * with a , but should ideally be fixed with curly braces:
     */
    if (ival < minval)
    {
        minval = ival;
        occurs = 1;
    }

    /* (c):
     * if (int ival = get_value())
     *     cout << "ival = " << ival << endl;
     * if (!ival)
     *     cout << "ival = 0\n";
     *
     * This code is incorrect because ival is declared inside the if conditional
     * but is used by the second if conditional despite not being declared in
     * that scope.
     * 
     * It is also odd that \n is used instead of endl, but this is not
     * incorrect and only fails to guarantee that the buffer is flushed.
     *
     * Assuming ival is available in both if's, the first executes if it is
     * non-zero and the second if it is zero, so the statement should be replaced
     * with an if-else so that the logic is more clear, and ival is available
     * to both branches even though it doesn't need to be in this situation
     * since we know it is zero inside the else..
     * (and {} added of course):
     */
    if (int ival = get_value())
    {
        cout << "ival = " << ival << endl;

    }
    else
    {
        cout << "ival = 0\n";
    }

    /* (d):
     * if (ival = 0)
     *     ival = get_value();
     *
     * This code is not technically incorrect, but because ival is set to 0
     * in the if the conditional will always evaluate to false and 
     * ival = get_value(); will never execute.
     * The assignment operator should be replaced with the equality comparision
     * operator '==' (and curly braces added for good practice/readability):
     */
    if (ival == 0)
    {
        ival = get_value();
    }

}

