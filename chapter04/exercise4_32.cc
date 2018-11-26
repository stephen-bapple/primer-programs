#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;

inline void print_vector(vector<int> &v)
{
    cout << "< ";
    for (const auto e : v)
    {
        cout << e << " ";
    }
    cout << ">" << endl;
}

int main()
{
    /*** Exercise 4.32: Explain the following loop. ***/

    constexpr int size = 5;         // Useful later.
    int ia[size] = {1, 2, 3, 4, 5}; // Array of exactly 5 ints.

    for (int *ptr = ia, ix = 0;
         // Declare an int ptr pt pointing to the first element of ia, 
         // discard the result (lvalue ptr), 
         // then declare int ix and initalize it to zero and return the result.
         // Despite ix being the return value of the comma operator, the return
         // value is not used.
         
         ix != size && ptr != ia + size;
         // Stop the loop if the index variable points off the end of the array
         // or the ptr variable points to the nonexistant element one position
         // after the end of the array

         ++ix, ++ptr) 
         // Evauate ++ix: Increment ix and store it in ix, return ix
         // discard the return value of ++ix and evaluate ++ptr:
         // increment ptr (move it to the next int) and return the
         // incremented value, which the for loop ignores.
    
    {/* ... */}
}

