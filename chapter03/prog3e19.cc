#include <iostream>
#include <string>
#include <cctype>
#include <typeinfo>
#include <vector>

#define use using std::
use string; use getline;
use cout; use cin; use cerr; use endl;
use vector;
#undef use

#define printvec(vec) \
	for (auto e : vec) \
        {\
            cout << "[" << e << "]";\
	} cout << endl;
	                  
int main()
{
    // One way to define a vector and give it ten elements of value 42.
    vector<int> vec1;
    for (int i = 0; i < 10; i++) vec1.push_back(42);
    printvec(vec1);

    // A better way to define a vector and give it ten elements of value 42.
    vector<int> vec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    printvec(vec2);

    // The best (in this situation) way to define a vector and give it 10
    // elements with the value 42.
    vector<int> vec3(10, 42);
    printvec(vec3);
}
