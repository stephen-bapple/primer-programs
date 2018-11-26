#include <iostream>

using std::cout; using std::endl;

int main()
{
    const int expected = 105;
    int result = 5 + 10 * 20/2;
 
    cout << "Value returned: <expected> | <actual>" << endl
             << "                <" << result << "     > | <   " 
             << expected << ">" << endl;
}
