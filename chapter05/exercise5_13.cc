#include <vector>
using std::vector;

char next_text()
{
    return 'a';
}

unsigned some_value()
{
    return 1;
}

int get_value()
{
    return 0;
}

int get_num()
{
    return 12345;
}

unsigned get_bufCnt()
{
    return 4096;
}

int main()
{
    /* Exercise 5.13
     *
     * Each of these programs contains a common programming error.
     * Identify and correct each error.
     */

    /* (a):
     * unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
     * char ch = next_text();
     * switch (ch) {
     *     case 'a': aCnt++;
     *     case 'e': eCnt++;
     *     default: iouCnt++;
     * }
     *
     * The issue with this code is that there are no break
     * statements so if case 'a' or case 'e' match the cases
     * below them increment their counts regardless.
     * Also, default is questionable unless we know for
     * sure that next_text() returns a vowel.
     *
     * It probably doesn't matter, but we might as well
     * chance the postfix increments to prefix increments.
     *
     * It should be rewritten like so:
     */
    
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch)
    {
        case 'a':
            ++aCnt;
            break;
        case 'e': 
            ++eCnt;
            break;
        case 'i': case 'o': case 'u':
            ++iouCnt;
            break;
        default:
            break; // Do nothing if not a vowel.
    }

    /* (b):
     * unsigned index = some_value();
     * switch (index) {
     *     case 1:
     *         int ix = get_value();
     *         ivec[ ix ] = index;
     *         break;
     *     default:
     *         ix = ivec.size() - 1;
     *         ivec[ ix ] = index;
     * }
     * 
     * The issue with this code is that ix is declared in case 1
     * but is used in default even though its declaration may be
     * skipped. The compiler does not allow this.
     * To fix this we need to simply declare ix either in both
     * cases or outside the switch, depending on how long the 
     * overall program would need it to be in scope.
     */
    vector<unsigned> ivec{0, 0};
    unsigned index = some_value();
    int ix;
    switch (index)
    {
        case 1:
            ix = get_value();
            ivec[ix] = index;
            break;
        default:
            ix = ivec.size() - 1;
            ivec[ix] = index;
            break;
    }

    /* (c):
     * usigned evenCnt = 0, oddCnt = 0;
     * int digit = get_num() % 10;
     * switch (digit)
     * {
     *     case 1, 3, 5, 7, 9:
     *         oddcnt++;
     *         break;
     *     case 2, 4, 6, 8, 10:
     *         evencnt++;
     *         break;
     * }
     * 
     * This code is incorrect because case labels do
     * not support listing cases in one label separated by commas.
     * The count variables are also misspelled in the switch.
     *
     * It should be rewritten like so:
     */
    unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit)
    {
        case 1: case 3: case 5: case 7: case 9:
            ++oddCnt;
            break;
        case 2: case 4: case 6: case 8: case 10:
            ++evenCnt;
            break;
        default:
            break; // No other reasonable possibility.
    }

    /* Note that it could be rewritten so much more concisely as:
     *
     * ((get_num() % 10) % 2 == 0) ? ++evenCnt : ++ oddCnt;
     */

    /* (d):
     * unsigned ival=512, jval=1024, kval=4096;
     * unsigned bufsize;
     * unsigned swt = get_bufCnt();
     * switch (swt) {
     *     case ival:
     *         bufsize = ival * sizeof(int);
     *         break;
     *     case jval: 
     *         bufsize = jval * sizeof(int);
     *         break;
     *     case kval:
     *         bufsize = kval * sizeof(int);
     *         break;
     * }
     * The principle problem with this code is that variables that are not
     * constant expressions are used as case labels.
     *
     * Another more devious problem with this code is that it does not 
     * include a default case, potentially leading to huge problems when
     * bufsize is used if it was not initialized.
     *
     * We can fix this by prefixing the variable declarations of i/j/kval
     * with constexpr to ensure they are usable in case labels.
     *
     * We can also add a default bufsize, but depending on the logic of
     * the program it may be better to exit, throw an exception, or
     * perhaps it is properly dealth with later in which case documentation
     * should be added here. The default bufsize is only added as an
     * acknowledgement that there is a problem to be fixed.
     */
    constexpr unsigned ival=512, jval=1024, kval=4096;
    constexpr unsigned min=256;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch (swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval: 
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
        default:
            bufsize = min * sizeof(int);
            break;
    }
}

