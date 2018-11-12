#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl;

bool is_prefix(const vector<int> &a, const vector<int> &b)
{
    // If the vectors are the same either is a prefix of the other.
    if (a == b) 
    {
        return true;
    }

    // Reverse the arguments if the smaller one came second.
    if (a.size() > b.size())
    {
        return is_prefix(b, a);
    }

    // We know a.size() <= b.size() because if not we reversed the arguments
    for (auto ait = a.begin(), bit = b.begin(); ait != a.end(); ++ait, ++bit)
    {
        if (*ait != *bit)
        {
            return false;
        }
    }

    return true; // We didn't find any difference.
}

int main()
{
    vector<int> a{0, 1, 1};
    vector<int> b{0, 1, 1, 2, 3, 5};
    cout << is_prefix(a, b) << endl;
    cout << is_prefix(b, a) << endl;
}

