#include <iostream>
using std::cout; using std::cin; using std::cerr; using std::endl;

/*
 * Dummy function for exercise. Does nothing useful.
 */
int txt_size()
{
    return 42;
}

/*
 * Another dummy function for exercise. 
 */
constexpr int ctxt_size()
{
    return 42;
}

/*
 * Exercise 3.27
 *
 * Note: this should be compiled with -pedantic-errors in order to demonstrate
 * which definitions are illegal according to ISO C++11. Otherwise, Clang and
 * Gnu compilers both allow variable length arrays as an extension to the 
 * language.
 */
int main()
{
//  unsigned buf_size = 1024;

    // (a): Technically illegal since buff_size is not a const exp.
// int ia1[buf_size]; // Will compile with Gnu g++ though.

    // However, if we use constexpr it is just fine:
    constexpr unsigned buf_size = 1024;
    int ia1[buf_size]; // Just fine on all compilers.


    // (b): Legal.  4*7 - 14 is a const expr.
    int ia2[4 * 7 - 14];

    // (c): Technically illegal since txt_size isn't a const expr.
//  int ia3[txt_size()];

    // However, if we use a constexpr function isntead it is just fine:
    int ia3[ctxt_size()];


    // (d): Illegal. "fundamental" is 12 characters long including the null
    // terminator.
//  char st[11] = "fundamental";
//  cout << st << endl;

    // We just need 1 extra space:
    char st[12] = "fundamental";
    cout << st << endl;
}


