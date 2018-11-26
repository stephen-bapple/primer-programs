#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

bool find(string &word)
{
    /* This is just a dummy implementation of 'find' 
     * because I'm not interested in taking the time to write a real one
     * and a find that is not a member function of an object and takes
     * one parameter doesn't make a lot of sense without some much-needed
     * context anyways.
     */
    static int i = 0;

    if (i == 8)
    {
        return false;
    }
    else
    {
        i++;
        return true;
    }
}

int main()
{
    /* Exercise 5.4:
     * Explain each of the following examples and correct any
     * problems you detect.
     */

    /* (a) while (string::iterator iter != s.end()) {...}
     *
     * This does not compile. 
     *
     * It was most likely intended to walk through a string since
     * it is comparing an iterator against the end marker.
     *
     * It does not compile because iter is prefixed with 
     * a type it neccesitates that iter is either being declared or casted.
     *
     * Casting is invalid because string::iterator is not surrounded by 
     * parentheses and neither is iter.
     *
     * Declaring iter is invalid because objects defined in control
     * structures must be initialized since their values are used
     * by the structure. This is not an initialization because != is
     * exclusively a relational operator.
     *
     * We might think we could do something like 
     *
     * while ( (string::iterator iter = s.begin()) != s.end())...
     *
     * ...but the grammar of C++ does not allow relational operators in a control
     * statement that has a declaration. i.e. a conditional can contain either a
     * single declaration (with an initialization of some sort) or an expression.
     * Declarations cannot be contained in an expression and adding != makes
     * it an expression.
     *
     * Assignment to a previously declared variable is just fine in an
     * expression though.
     *
     * It can be fixed by declaring iter outside the while loop, but the
     * most sensible implementation of the most likely intended logic is by
     * using a for loop:
     */
    string s("A String.");

    for (string::iterator iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << ", ";
    }
    cout << endl;

    /* (b) while (bool status = find(word)) {...}
     *     if (!status) {...}
     *
     * This does not compile either. The while loop is just fine, it declares
     * status as a bool and initializes it to the return value of of find(word)
     * and continues the loop if status is true or exits if status is false.
     *
     * However, because it declares status inside the while, status 
     * cannot be used outside its block scope.
     * This means that if(!status) does not compile because status was
     * not declared within the scope that if exists in.
     *
     * The code's most likely purpose was to do something with word inside the
     * while loop and exit as soon as the find() function returned false
     * based on the contents of word. However, because of the if afterwards
     * that checks the value of status there might be another way to exit the
     * while loop which needs to be checked. Therefore, it can be fixed by
     * declaring status outside the while loop.
     */
    string word("A word.");

    bool status;
    while (status = find(word)) { /* ... */ }

    if (!status) { /* ... */ }

    cout << "Terminated successfully." << endl;

}

