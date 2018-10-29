#include <iostream>
#include <string>

using std::string; using std::cout; using std::endl;

int main()
{
    string s = "word";

    /* This statement fails to compile because + has higher
     * precedence than ==, so the statement gets the last 
     * character of s, adds it to s, and compares the string to 's'.
     *
     * string has no defined = operator for string = char so the compilation 
     * fails.
     *
     */
    //string p1 = s + s[s.size() - 1] == 's' ? "" : "s";

    // Fixed version:
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");

    cout << p1 << endl;

    // Or an even better version:
    s = "thing";
    p1 = s[s.size() - 1] == 's' ? s : s + "s";
    cout << p1 << endl;
}

