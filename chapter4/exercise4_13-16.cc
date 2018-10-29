#include <iostream>
using std::cout; using std::endl;

int getPtr()
{
    return 0;
}

int main()
{
    // Exercise 4.13
    int i; double d;
    
    // (a): 
    d = i = 3.5;
    cout << "Expected i, d = : " << "3, 3.0 Got " << i << ", " << d << endl;

    // (b)
    i = d = 3.5;
    cout << "Expected i, d = : " << "3, 3.5 Got " << i << ", " << d << endl;

    // Exercise 4.14
    // (a): Compiler error: can't assign to an rvalue.
//  if (42 = i);

    // (b): Legal, tests if i != 0 after assignment, which will always be true.
    // Should be replaced by i = 42; (no if) if it isn't a mistake.
    if (i = 42) {}; 

    // Exercise 4.15: 
    double dval; int ival; int *pi;
    
    // The following assignment is illegal because we cannot assign a pointer to
    // an int (or a double for that matter) so ival = pi fails.
//  dval = ival = pi = 0;

    // Assuming that the intent was to zero all vars we can rewrite it like so:
    pi = nullptr;
    ival = dval = 0;

    // Exercise 4.16:
    i = 0;
    int p;

    // (a): This statement first compares the result of getPtr() to 0,
    // and then assigns the result (true/false) to p.
    // This is probably not intended as the programmer likely meant to assign
    // the result of getPtr to p and then test if p != 0.
    if (p = getPtr() != 0){}

    // It should be rewritten like so:
    if ((p = getPtr()) != 0){}

    // (b): This statement assigns the value of 1024 to i and then tests if != 0
    // This is unlikely to be intended because i will always be non-zero and the
    // if block will always execute.
    if (i = 1024){}

    // The programmer likely meant to write:
    if (i == 1024) {}
}

