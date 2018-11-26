#include <iostream>
using std::string; using std::cout; using std::endl;
f2() {
    string a;
}
void fill_stack()
{
    const char * a01 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a02 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a03 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a04 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a05 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a06 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a07 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a08 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a09 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a10 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a11 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a12 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a13 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a14 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a15 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a16 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
const    char * a17 = "JUNK JUNK JUNK JUNK JUNK JUNK JUNK";
}

int * get_string()
{
    int i = 20;
    int *ptr = &i;

    cout << "<" << *ptr << ">" << endl;
    cout << "Address of the int: " << ptr << endl;
    
    return ptr;
}

int main()
{
    fill_stack();
    int * ret = get_string();
    for (int i = 0; i < 10000; ++i) fill_stack();

    cout << "<" << *ret << ">" << endl;
    cout << "Address of the int: " << ret << endl;
}

