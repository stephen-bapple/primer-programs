#include <iostream>
#include <iterator>

using std::cout; using std::endl;

int main()
{
    // ia is an array of 3 arrays of 4 ints
    int ia[3][4] ={{0, 1, 2, 3},
                   {4, 5, 6, 7},
                   {8, 9, 10, 11}};
    // degrades to a pointer to an array of 4 ints. Pointing at 1st array
    // out of the three arrays.

    cout << "[ ";
    for (int (&row)[4] : ia)
    {
        for (int col : row)
        {
            cout << col << ' ';
        }
    }
    cout << "]" << endl;

    cout << "[ ";
    for (int row = 0; row != 3; row++)
    {
        for (int col = 0; col != 4; col++)
        {
            cout << ia[row][col] << ' ';
        }
    }
    cout << "]" << endl;

    cout << "[ ";
    for (int (*p)[4] = ia; p != ia + 3; p++) // p is a ptr to an array of 4 ints
    {
        for (int *q = *p; q != *p + 4; q++) // q is a pointer to int
        {                                   // *p is an array of 4 ints
            cout << *q << ' ';  // *q is an int
        }
    }
    cout << "]" << endl;
}

