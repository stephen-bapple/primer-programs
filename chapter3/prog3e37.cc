#include <iostream>

using std::cout; using std::endl;

/*
 * Exercise 3.37: What does the following program do?
 */
int main()
{

    /*
     * The following program does its best to cause a segfault.
     *
     * It writes the contents of a char array to std out, however while (*cp)
     * will only evaluate to false when a '\0' (equivalent to integral 0)
     * is encountered. Since the char array is not null terminated we do not
     * know when that will happen.
     *
     * The OS might terminate this program if it reads too far but 
     * otherwise/in the meantime it will print "h\ne\nl\nl\no" perhaps followed 
     * by gibberish. It's entirely likely there is a 0 in the right place,
     * but we cannot rely on it being there.
     */
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp)
    {
        cout << *cp << endl; 
        ++cp; 
    }
}

