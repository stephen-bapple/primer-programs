#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
#include <vector>

#define use using std::
use string; use getline;
use cout; use cin; use cerr; use endl;
use vector;
#undef use

int main()
{
    vector<string> words;
    string input;

    cout << "Type some words: ";

    while (cin >> input)
    {
        words.push_back(input);
    }

    for (auto &word : words)
    {
        for (auto &c : word)
	{
	    c = toupper(c);
	}
    }

    for (decltype(words.size()) i = 0; i < words.size(); i++)
    {
	if (i % 8 == 0) cout << endl;
        cout << words[i] << " ";
    }
    cout << endl;
}

