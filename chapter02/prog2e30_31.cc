#include <iostream>

int main()
{
    // The book forgot to delare i:
    int i = 0;

    /** Exercise 30: top or low-level const? **/
    const int v2 = 0;        // Top level const for v2. 
    int v1 = v2;             // Neither.
    int *p1 = &v1, &r1 = v1; // Neither.
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // Top for p2, both for p3.

    // Valid, v2 is top-lvl const but we're only copying its value.
    r1 = v2; // r1 is not low-lvl const so it's ok.

    // Invalid. p1 is not low-lvl const but p2 is. Thus we can't copy.
    //p1 = p2;

    // Invalid. p1 is not low-lvl const but p3 is. 
    //p1 = p3; // p3 is also high level const but that's irrelevant here.

    // Valid. p2 is low level const, but can convert !const -> const.
    p2 = p1;

    // Valid. Both p2 and p3 are low-lvl const. p3 is high lvl const
    p2 = p3;  // but that's irrelvant here.
}
