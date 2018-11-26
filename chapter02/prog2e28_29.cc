#include <iostream>

int main()
{
    /** Exercise 2.28 **/
    
    // (a): i is fine, regular int defined but not initialized.
    // cp is invalid because constants must be initialized.
    // int i, *const cp; 
 
    // (b): int ptr p1 is fine: regular pointer to an int. 
    //      Defined but uninitialized. p2 is a constant pointer to an int,
    //      but is illegal because constants must be initialized.
    //int *p1, *const p2;
   
    // (c): ic is a constant int. r is a reference to a constant int.
    // ic is invalid because constants must be initialized.
    // r would be valid if ic had been initialized.
    // const int ic, &r = ic;

    // (d): p3 is a constant pointer to an (assumed) constant int.
    // The definition is illegal because p3 is not initialized.
    //const int *const p3;

    // (e): p is a pointer to a constant int. The definition is legal, 
    // the pointer is variable and we can change its address all we want.
    //  We just can't change any underlying objects it points to.
    const int *p;

    /** Exercise 2.29 **/
    // Valid versions of invalid defs.
    int i, *const cp = &i;
    int *p1, *const p2 = &i;
    const int ic = 1, &r = ic;
    const int *const p3 = &i;

    // (a): Legal if ic had been properly initialized.
    i = ic; // We can copy the value of a constant int into a regular int.

    // (b): Not ok. p1 is a pointer to a variable int and p3 is a 
    //p1 = p3; // pointer to a constant int.

    // (c): Not ok. ic is a const int and p1 is a pointer to a regular int.
    //p1 = &ic; // Thus we can't copy ic's address to p1.

    // (d): Illegal. ic is a const int and p3 is a poiner to a const int,
    //p3 = &ic; // but p3 is a const ptr and cannot be changed.

    // (e): Illegal. p2 is a const pointer and cannot be changed.
    //p2 = p1;

    // (f): Illegal. Cannot assign to a constant int.
    //ic = *p3;
}
