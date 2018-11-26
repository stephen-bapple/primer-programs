#define print_vars()\
std::cout << "a_=" << a << ", b_=" << b << ", i_=" << i\
          << ", ir_=" << ir << ", id_=" << id\
          << ", ii_=" << ii\
          << std::endl;

#define print_vars2()\
std::cout << "aa_=" << aa << ", ab_=" << ab << ", ai_=" << ai\
          << ", air_=" << air << ", aid_=" << aid\
          << std::endl;
#include <iostream>
#include <typeinfo>

int main()
{
    const int a = 5;   // Constant int, a = 5
    decltype(a) b = 2; // Constant int, b = 2

    int i = 0;           // int i
    int &ir = i;         // reference to int, bound to i
    decltype(ir) id = i; // reference to int, bound to i

    decltype(i) ii = i;  // just int.
    std::cout << typeid(ii).name() << std::endl;
    
    print_vars();
    ir = 3;
    print_vars();

    ii = 999;
    print_vars();

    decltype((i)) fin = i;
//-------------------------------------------------------------------------//

    const int aa = -5; // Constant int, aa = -5;
    auto ab = a;       // Regular int. ab = -5
    int ai = -1;       // int ai
    auto &air = aa;     // reference to int, bnd to aa. Const by necessity..

    auto aid = air;     //  regular int.
    print_vars2();

    aid = -99;
    print_vars2();
    
}

