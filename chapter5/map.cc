#include <iostream>
#include <map>
#include <cctype>

using std::map; using std::cout; using std::endl; using std::cin;

int main()
{
    /* This is just a simpler version of the
     * vowel counting program used in chapter 5.
     *
     * Maps have not been used at this point in the text,
     * I simply wanted to check the STL functionality provided
     * as I say an obvious usecase here.
     */
    map<char, unsigned> counts;
    counts['a'] = 0;
    counts['e'] = 0;
    counts['i'] = 0;
    counts['o'] = 0;
    counts['u'] = 0;
   

    for (auto pair : counts)
    {
        cout << pair.first << " " << pair.second << endl;
    }
    char ch;
    while (cin >> ch)
    {
        ch = tolower(ch);
        if (counts.count(ch) > 0)
        {
            counts[ch]++;
        }
    }   

    for (auto it = counts.begin(); it != counts.end(); it++)
    {
        cout << "<" << it->first << ", " << it->second << ">" << endl;
    }
}
