#include <vector>
#include <iostream>

#define compa(a, b, exp)\
    std::cout << "Expected " << exp << " got "\
              << compare_arrays(a, a + sizeof(a) / sizeof(a[0]),\
                                b, b + sizeof(b) / sizeof(b[0]))\
              << std::endl;

#define compv(a, b, exp)\
    std::cout << "Expected " << exp << " got "\
              << compare_vectors(a, b)\
              << std::endl;
using std::vector;
bool compare_vectors(const vector<int> &a, const vector<int> &b)
{
    // Check if same object:
    if (&a == &b) {
        std::cout << "Same object: "; 
        return true;
    }

    // Check if they are the same length:
    if (a.size() != b.size())
    {
        std::cout << "Different sizes: ";
        return false;
    }

    for (auto ait = a.begin(), bit = b.begin();
         ait != a.end() && bit != b.end(); ait++, bit++)
    {
        if (*ait != *bit)
        {
            std::cout<< "Elements " << *ait << "!=" << *bit << ": ";
            return false;
        }
    }
    std::cout << "All elements match: ";
    return true; // Found no unequal elements.
}

bool compare_arrays(const int *a, const int *aend,
                    const int *b, const int *bend)
{
    // Check if same object:
    if (a == b) {
        std::cout << "Same object: "; 
        return true;
    }

    // Check if they are the same length:
    if ((aend - a) != (bend - b))
    {
        std::cout << "Different sizes: ";
        return false;
    }

    while (a != aend && b != bend)
    {
        if (*a != *b)
        {
            std::cout<< "Elements " << *a << " != " << *b << ": ";
            return false;
        }
        a++;
        b++;
    }
    std::cout << "All elements match: ";
    return true; // Found no unequal elements.

}

int main()
{
    {
        vector<int> a(10, 1);
        vector<int> b(10, 1);
        vector<int> c{1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
        vector<int> d{1, 0, 1, 1, 1, 1, 1, 1, 1, 1};
        vector<int> e{0, 5, 6};
        vector<int> f{1, 1, 1};

        std::cout << "Vectors:" << std::endl; 
        compv(a, a, "true");
        compv(a, b, "true");
        compv(a, c, "false");
        compv(a, d, "false");
        compv(a, f, "false");
        compv(e, f, "false");
    }

    {
        int a[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        int b[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        int c[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
        int d[] = {1, 0, 1, 1, 1, 1, 1, 1, 1, 1};
        int e[] = {0, 5, 6};
        int f[] = {1, 1, 1};

        std::cout << "Arrays: " << std::endl;
        compa(a, a, "true");
        compa(a, b, "true");
        compa(a, c, "false");
        compa(a, d, "false");
        compa(a, f, "false");
        compa(e, f, "false");
    }
}

