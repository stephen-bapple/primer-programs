#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
#include <vector>
#include <fstream>
#include <sstream>

#define use using std::
use string; use getline;
use cout; use cin; use cerr; use endl;
use vector; use ifstream; use stringstream;
#undef use

int main()
{
    /*
     * This first part of the code is all included to set up the input stream
     * according to how we are told to assume it is presented in C++ Primer.
     *
     * Which is, a vector of strings which are either sentences or empty
     * strings, the latter of which represent paragraph breaks.
     */   
    const string INPUT("lorem_ipsum.txt");
    ifstream input_file;
    input_file.open(INPUT);

    // Abort if unable to open the file.
    if (!input_file)
    {
        cerr << "Unable to open input file: " << INPUT << endl;
        return -1;
    }

    vector<string> text;
    string sentence;
    string token;

    // Parse the sentences.
    while (getline(input_file, sentence))
    {
      if (sentence.find(".") == string::npos)
      {
          text.push_back(sentence);
      } 
      else
      {
          stringstream s;
          s << sentence;
          while (getline(s, token, '.'))
          {
              if (isspace(token.front())) token.erase(token.begin());
              text.push_back(token);
          }
      }
    }

    /*
     * This is where exercise 3.21 actually starts.
     * We simply change the first paragraph to all uppercase. 
     * Then we print the entire body of text.
     */

    // Change the entire first paragraph to uppercase.
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto &c : *it)
        {
            c = toupper(c);
        }
    }    

    // Output all the sentences to the console.
    for (auto sentence : text)
    {
        cout << sentence;
        if (!sentence.empty()) cout << ".";
        cout << endl;
    } 
}

