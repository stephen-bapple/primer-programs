#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::cin; using std::endl;
using std::string; using std::getline;

int main()
{
    unsigned long aCnt(0), eCnt(0), iCnt(0), oCnt(0), uCnt(0);
    unsigned long vowelCnt(0);
    unsigned long spaceCnt(0);
    unsigned long tabCnt(0);
    unsigned long newlineCnt(0);

    string input;

    while (getline(cin, input))
    {
        for (auto c : input)
        {
            c = tolower(c);
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
         << "newlines: " << newlineCnt << endl;
}

