#include <iostream>
using std::cout; using std::endl;

double f(void);

int main()
{
    int x(0), y(0), i(0), a(0), b(0);
    struct {int mem[10];} *p;

    /** Exercise 4.30
     **  
     ** Parenthesize the following expressions to match the detault
     ** evaluation:
     **/

    // (a): sizeof x + y:        precedence:[sizeof] > [+]
    cout <<( (sizeof x) + y  )<< " vs " <<( sizeof x + y ) << endl;

    // (b): sizeof p->mem[i]:    precedence:[LtR: ->, []] > [sizeof] 
    cout <<( sizeof ((p->mem)[i]) )<< " vs " <<( sizeof p->mem[i] )<< endl;

    // (c): sizeof a < b:        precedence:[sizeof] > [<] >
    cout <<( (sizeof a) < b )<< " vs " <<( sizeof a < b )<< endl;

    // (d): sizeof f():          precedence: [() i.e. function call] > [sizeof]
    cout <<( sizeof (f()) )<< " vs " <<( sizeof f() )<<endl;
}

