#include <iostream>

int main()
{
    // (a): invalid. int i is fine as a normal int definition,
    // but &r isn't bound to another object and thus causes an error.
    // int i = -1, &r = 0; // Would be fine if &r was a const reference though.

    /* (b): No information is given about i2's type, so impossible to tell...
     * But say we define i2 as a non-const int this would be valid as p2 is only
     * top-level const. */
    int i2 = -1;
    int *const p2 = &i2;

    // (c):  Valid unlike (a) because &r is a ref to a const int so referencing
    // a pre-existing object is unecessary.
    const int i = -1, &r = 0; 

    // (d): Legal as long as i2 is an int, either const or not.
    const int *const p3 = &i2;

    // (e): Legal as long as i2 is an int, either const or not.
    const int *p1 = &i2;

    // (f): Invalid as you can't have a const reference. (redundant.)
    // Also, 
    // references need to be initialized/bound even if referring to a const.
    //const int &const r2;

    // (g): Valid. Copying an int value to a const int is fine.
    // A ref to a constant in bound to a non const obj is fine.  
    const int i3 = i, &r3 = i;
}
