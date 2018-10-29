#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main()
{
    int grade = 91;
    string finalgrade;
    /* Exercise 4.24
     * Original statement:
     *     finalgrade = (grade > 90) ? "high pass" 
     *                : (grade > 60) ? "pass" 
     *                : "fail";
     *
     * If the conditional operator was left associative it would parse like so:
     */
    finalgrade = ((grade > 90) ? "high pass" : (grade > 60)) ? "pass" : "fail";

    // This expression would result in either "high pass" or a bool being
    // returned as used as the result of the second conditional instead of
    // (grade > 60), which does not make sense to use as a conditional. 
    // As it is, this code will not compile since const char* and bool
    // are not compatible.
    cout << finalgrade << endl;

}
