int get_size()
{
    static int size = -10;
    return ++size;
}

int main()
{
    /* Exercise 5.22:
     * This code can be better written as a loop. 
     * Rewrite it to remove the goto.
     *
     *   begin:
     *     int sz = get_size();
     *     if (sz <= 0) {
     *         goto begin;
     *     }
     */
    int sz = get_size();
    while (sz <= 0)
    {
        sz = get_size();
    }
}
