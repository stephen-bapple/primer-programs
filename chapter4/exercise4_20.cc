#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::vector; using std::string;

int main()
{
    vector<string> vec(26, "A");
    int count = 0;
    for (auto &str : vec) str[0] += count++;
    vector<string>::iterator iter = vec.begin();

    /* Exercise 4.20
     * Assuming that iter is a vector<string>::iterator,
     * indicate which, if any, of the following expressions are legal.
     * Explain the behavior of the legal expressions and why those that
     * aren't legal are in error.
     */
    /* (a): Correct. ++ binds more tightly than * but because it is the postfix
     * it returns the original iterator. The statement increments the iterator, 
     * then returns the original iterator which is then dereferenced.
     *
     * It should print "A" \n "B"
     */
    cout << *iter++ << endl;
    cout << *iter << endl;

    /* (b): Incorrect. String has no ++ operator and this leads
     * to a compiler error.
     */
    //cout << (*iter)++ << endl;
    
    /* (c): Incorrect. '.' binds more tightly than '*' and thus the statement
     * calls for a member method 'empty' which doesn't exist for 
     * vector<string>::iterator. It would then attempt to function call it and 
     * then dereference the result, but it will not compile.
     *
     * There is also a missing semicolon in the book but that is likely errata.
     */
    //*iter.empty();
    
    /* (d): Correct. This is the correct version of (c). 
     * iter->empty() is shorthand for (*iter).empty() which dereferences the
     * iterator to get a string and then calls the string's empty method.
     */
    cout << iter->empty() << endl;

    /* (e): Incorrect. Prefix ++ and deref * are both the same precedence,
     * and they are left to right associative, so this statement dereferences
     * iter and then tries to preincrement the string returned. strings have
     * no prefix++ so this will not compile.
     */
    //++*iter; 

    /* (f): Correct. Call the empty method of the string pointed to by
     * iter and then increment iter to point to the next string.
     */
    cout << iter++->empty() << endl; // Should be 0 for false.
    cout << *(iter - 1) << endl;     // Should be "B"
    cout << *iter << endl;           // Should be "C"
}

