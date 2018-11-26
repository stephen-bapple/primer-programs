#include <iostream>
#include <string>
#include <cctype>
#include <iterator>

using std::cout; using std::cin; using std::endl;
using std::string; using std::getline;
using std::next;

int main()
{
    unsigned long aCnt(0), eCnt(0), iCnt(0), oCnt(0), uCnt(0), vowelCnt(0);
    unsigned long spaceCnt(0), tabCnt(0), newlineCnt(0);
    unsigned long ffCnt(0), flCnt(0), fiCnt(0);
    string input;

    while (getline(cin, input))
    {
        for (auto it = input.begin(); it != input.end(); it++)
        {
            auto c = tolower(*it);
//            cout << "<" << c << ">";
            if (c == 'a') 
            {
                ++vowelCnt;
                ++aCnt;
            } 
            else if (c == 'e')
            {
                ++vowelCnt;
                ++eCnt;
            }
            else if (c == 'i')
            {
                ++vowelCnt; 
                ++iCnt;
            } 
            else if (c == 'o')
            {
                ++vowelCnt; 
                ++oCnt;
            } 
            else if (c == 'u')
            {
                ++vowelCnt;
                ++uCnt;
            } 
            else if (c == ' ')
            {
                ++spaceCnt;
            }
            else if (c == '\t')
            {
                ++tabCnt;
            }
            else if (c == 'f')
            {
                auto nxt = next(it);
                if (nxt != input.end())
                {
                    auto nc = *nxt;
                    if (nc == 'f') 
                    {
                        ++ffCnt;
                        ++it; // We already checked the next character.
                    }
                    else if (nc == 'l')
                    {
                        ++flCnt;
                        ++it; // We already checked the next character.
                    } 
                    else if (nc == 'i')
                    {
                        ++fiCnt;
                        ++it; // We already checked the next character.
                    }
                }

            }
        }
        cout << "<\\n>" << endl;
        ++newlineCnt;
    }

    cout << "Number of vowels in the text entered: " << vowelCnt << endl
         << "a: " << aCnt << endl
         << "e: " << eCnt << endl
         << "i: " << iCnt << endl
         << "o: " << oCnt << endl
         << "u: " << uCnt << endl
         << "spaces: " << spaceCnt << endl
         << "tabs: " << tabCnt << endl
         << "newlines: " << newlineCnt << endl
         << "ff occurences: " << ffCnt << endl
         << "fl occurences: " << flCnt << endl
         << "fi occurences: " << fiCnt << endl;
}

