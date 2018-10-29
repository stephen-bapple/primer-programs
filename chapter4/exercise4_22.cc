#include <iostream>
#include <string>

using std::cout; using std::cerr; using std::endl;
using std::string; using std::stoi;

int main(int argc, char *argv[])
{
    int grade;

    if (argc < 2)
    {
        cerr << "Usage: <program> <grade 0 - 100>." << endl;
        return -1;
    }
    else
    {
        try
        {
            grade = stoi(argv[1]);
            if (grade < 0 || grade > 100)
            {
                cerr << "Invalide grade: should be in range [0, 100]" << endl;
                return -1;
            }
        }
        catch (std::exception e)
        {
            cerr << "Cannot parse number from " << argv[1] << endl;
            return -1;
        }
    }

    /* Here are two versions of the pass/fail grade program.
     * In my opinion the if/else if/ else is easier to understand because
     * it consists of simpler syntxt that is much easier to parse quickly.
     * The ternary version is much shorter but takes more thinking to understand
     * since it must by necessity nest, whereas the if/else does not need to.
     * 
     * (or at least it conceptually appears that it does not nest, 
     * despite the reality that there is no "else if" only if and else
     * and else if is just a nested if inside the else.)
     */
    cout << "Exercise 4.22 version #1" << endl;
    string finalgrade;
    finalgrade = (grade > 90) ? "high pass" 
               : (grade > 75) ? "pass"
               : (grade > 59) ? "low pass" 
               : "fail";

    cout << "Final grade: " << finalgrade << endl;

    cout << "Exercise 4.22 version #2" << endl;
    finalgrade = "fail";

    if (grade > 90)
    {
        finalgrade = "high pass";
    }
    else if (grade > 75)
    {
        finalgrade = "pass";
    } 
    else if (grade >= 60)
    {
        finalgrade = "low pass";
    }

    cout << "Finalgrade: " << finalgrade << endl;

}

