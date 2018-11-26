/*
 * Exercise 3.5.
 */

#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string; using std::getline;

int main()
{
   // Prompt user
   cout << "Enter some stuff. Whatever you want. Type ctrl-d (unix) or "
        << "ctrl-z (windows) to quit." << endl;

   // Get all input
   string no_spaces, with_spaces, input;
   if (cin >> input)
   {
       no_spaces = with_spaces = input;
       while (cin >> input)
       {
           no_spaces += input;
           with_spaces += " " + input;
       }
   }

   // Output everything
   cout << "Everything you entered, all together:" << endl 
        << no_spaces << endl
        << "Everything you entered, separated by spaces:" << endl
        << with_spaces << endl;

   return 0;
}

