#include <iostream>
#include <string>
#include <map>

using std::cout; using std::cin; using std::cerr; using std::endl;
using std::string;
using std::map;

int main()
{
    string input;
    string last_word;
    string most_repeated;

    unsigned max_duplicates = 1;
    unsigned current_duplicates = 1;

    // Prompt user for input.
    cout << "Enter some words and type Ctrl-D (unix)/Ctrl-Z (win) to quit: ";

    // Get the first word.
    if (cin >> input)
    {
        last_word = input;
    }
    else
    {
        cerr << "No words were entered. Exiting..." << endl;
        return -1;
    }

    // Get all remaining words.
    while (cin >> input)
    {

        if (input == last_word)
        {
            current_duplicates++;
            if (max_duplicates < current_duplicates)
            {
                max_duplicates = current_duplicates;
                most_repeated = input;
            }

        }
        else
        {   
            current_duplicates = 1;
            last_word = input;
        }
    }

    cout << endl;
    if (max_duplicates == 1) 
    {
        cout << "No word was repeated more than once in sequence." << endl;
    }
    else
    {
        cout << "The word that was repeated most often was " << most_repeated
             << endl << "It was repeated " << max_duplicates << " times."
             << endl;
    }
}

