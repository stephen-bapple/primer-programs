#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

int main()
{
    vector<int> vec(10, 0);
    int count = -1;
    for (auto &e : vec) e += ++count;
    for (auto &e : vec) (e % 2 == 1) ? (e *= 2) : e;

    cout << "< ";
    for (auto e : vec) cout << e << " ";
    cout << ">" << endl;
}

