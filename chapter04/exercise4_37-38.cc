#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string;

int main()
{
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;

    /* Exercise 4.37.
     * Rewrite each of the following old-style casts
     * to use a named cast:
     */

    // (a): pv = (void*) ps;
    pv = static_cast<void*>(const_cast<string*>(ps));

    // (b): i = int(*pc);
    i = static_cast<int>(*pc);

    // (c): pv = &d;
    // There is no cast here. 
    // 
    // There's an implicit conversion from double* to void*
    // so we can at least make that explicit.
    pv = static_cast<void*>(&d);

    // (d): pc = (char*) pv;
    pc = static_cast<char*>(pv);

    /* Exercise 4.38:
     *
     * Explain the following expression:
     *     double slope = static_cast<double>(j/i);
     * 
     * Assuming i and j are ints, which is heavily implied
     * by their names, the expression performs integral division
     * (truncating any remainder) and then casts the result to
     * double and stores it in slope.
     *
     * This would be done automatically if the static_cast were
     * left out because there is an implicit conversion between
     * int and double. 
     */
    
}

