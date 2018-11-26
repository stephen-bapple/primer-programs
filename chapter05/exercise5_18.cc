#include <iostream>
using std::cout; using std::cin; using std::endl;

int get_response()
{
    static int response = 10;
    --response;
    if (response == 0)
    {
        response = 10;
        return 0;
    }
    return response;
}

int main()
{
    /* Exercise 5.18:
     *
     * Explain each of the following loops. Correct any problems you
     * detect.
     */

    /* (a)
     * do
     *     int v1, v2;
     *     cout << "Please enter two numbers to sum:";
     *     if (cin >> v1 >> v2)
     *         cout << "Sum is: " << v1 + v2 << endl;
     * while(cin)
     *
     * This loop will not compile because there are multiple statements
     * after the do and before the while. Since do must always be paired
     * with while there is no valid use case.
     * To fix it we need to place the statements inside a block.
     */
    do
    {
        int v1, v2;
        cout << "Please enter two numbers to sum:";
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    } while(cin);

    cin.clear();
    cin.ignore();

    /* (b)
     * do {
     *     // ...
     * } while (int ival = get_response());
     *
     * This loop is not compilable since declarations in the while condition
     * in do while loops are not allowed.
     * To fix it we can declare ival before the loop. Of course, this assumes
     * that ival is actually needed in the loop. If it is not it would be
     * better to simply test the value of get_response() by itself.
     */
   int ival;
   do {
      // ...
      cout << "This loop does nothing <" << ival << ">" << endl;
   } while (ival = get_response()); 


   /* (c)
    * do {
    *   int ival = get_response();
    * } while (ival);
    *
    * This loop is not compilable since ival is not usable in the while
    * condition since it was declared inside the do-while loop.
    * To fix it we can simply declare ival before the loop.
    */
   int ivalc;
   do 
   {
       ivalc = get_response();
       cout << "This loop doesn't do anything either <" << ivalc << ">"
            << endl;
   } while (ivalc);
}

