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
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    
    // In ths loop prefix increment and decrement are used because
    // they are sometimes more efficient to use because a copy of the
    // original value does not need to be stored.
    // When the value is not used, most compilers should optimize
    // the  difference away, but using prefix is still more portable.
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
    {
        ivec[ix] = cnt;
    }
    print_vector(ivec);

    ivec = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cnt = ivec.size();

    // Altering the program to use postfix is incredibly simple:
    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
    {
        ivec[ix] = cnt;
    }

    // As we can see, the result is identical.
    print_vector(ivec);
}

