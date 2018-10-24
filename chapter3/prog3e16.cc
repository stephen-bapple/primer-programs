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

int main()
{
   // (a): Empty vector: No elements, no values.
   vector<int> v1;
   cout << "v1 <size " << v1.size() << ">: ";
   for (auto i : v1) cout << "[" << i << "]"; 
   cout << endl;
 
   // (b): 10 Elements. Value initialization initialized all ints as 0.
   vector<int> v2(10);
   cout << "v2 <size " << v2.size() << ">: ";
   for (auto i : v2) cout << "[" << i << "]"; 
   cout << endl;

   // (c): 10 Elements. Each element is 42.
   vector<int> v3(10, 42);
   cout << "v3 <size " << v3.size() << ">: ";
   for (auto i : v3) cout << "[" << i << "]"; 
   cout << endl;

   // (d): List initialization ok since 10 is int: 1 Element with value 10.
   vector<int> v4{10};
   cout << "v4 <size " << v4.size() << ">: ";
   for (auto i : v4) cout << "[" << i << "]"; 
   cout << endl;

   // (e): List init ok since 10 and 42 are int. 2 Elements with value 42.
   vector<int> v5{10, 42};
   cout << "v5 <size " << v5.size() << ">: ";
   for (auto i : v5) cout << "[" << i << "]"; 
   cout << endl;

   // (f): Can't list-init since 10 is not a string. Initialize to a vector
   // with 10 strings. Value init for the strings calls the default constructor
   // resulting in 10 empty strings.
   vector<string> v6{10};
   cout << "v6 <size " << v6.size() << ">: ";
   for (auto i : v6) cout << "[" << i << "]"; 
   cout << endl;
   
   // (g): Can't list init since 10 is not a string. Initialize a vector with
   // 10 strings with the value "hi".
   vector<string> v7{10, "hi"};
   cout << "v7 <size " << v7.size() << ">: ";
   for (auto i : v7) cout << "[" << i << "]"; 
   cout << endl;

}

