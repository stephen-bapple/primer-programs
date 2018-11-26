#include <cstddef>
/*
 * Exercise 3.30: Identify the indexing errors in this code.
 */
int main()
{
    constexpr size_t array_size = 10; // Good practice: using size_t
    int ia[array_size]; // Fine on all compilers.
    // Note thatelements of ia are undefined. Although, this is only an issue if
    // we try to use the values before assignment.

    /* Error: arrays are zero indexed, ix should likely start at 0
     * and ix should definitely be tested to be < array_size.
     * As it is ix runs off the end of ia and could cause problems.
     * Code is commented out because it triggers a stack smashing abort
     * on the machine it was coded on.
     */
//  for (size_t ix = 1; ix <= array_size; ++ix)
//  { 
//      // Would be fine if we weren't causing overflow with our indexing.
//      ia[ix] = ix; 
//  }

    // Correct solution:
    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix + 1;
    }

    // A better and safer solution:
    int increment = 1;
    for (auto &a : ia)
    {
        a = increment++;
    }
}

