#include <iostream>
#include <string>
#include <cctype>

using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
    unsigned long aCnt(0), eCnt(0), iCnt(0), oCnt(0), uCnt(0);
    unsigned long num_vowels(0);
    string input;

    while (cin >> input)
    {
        for (auto c : input)
        {
            c = tolower(c); 
            if (c == 'a') 
            {
                ++num_vowels;
                ++aCnt;
            } 
            else if (c == 'e')
            {
                ++num_vowels;
                ++eCnt;
            }
            else if (c == 'i')
            {
                ++num_vowels; 
                ++iCnt;
            } 
            else if (c == 'o')
            {
                ++num_vowels; 
                ++oCnt;
            } 
            else if (c == 'u')
            {
                ++num_vowels;
                ++uCnt;
            } 
        }
    }

    cout << "Number of vowels in the text entered: " << num_vowels << endl
         << "a: " << aCnt << endl
         << "e: " << eCnt << endl
         << "i: " << iCnt << endl
         << "o: " << oCnt << endl
         << "u: " << uCnt << endl;
}

