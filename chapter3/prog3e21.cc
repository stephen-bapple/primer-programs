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
   for (auto it = v1.cbegin(); it != v1.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;
 
   // (b): 10 Elements. Value initialization initialized all ints as 0.
   vector<int> v2(10);
   cout << "v2 <size " << v2.size() << ">: ";
   for (auto it = v2.cbegin(); it != v2.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;

   // (c): 10 Elements. Each element is 42.
   vector<int> v3(10, 42);
   cout << "v3 <size " << v3.size() << ">: ";
   for (auto it = v3.cbegin(); it != v3.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;

   // (d): List initialization ok since 10 is int: 1 Element with value 10.
   vector<int> v4{10};
   cout << "v4 <size " << v4.size() << ">: ";
   for (auto it = v4.cbegin(); it != v4.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;

   // (e): List init ok since 10 and 42 are int. 2 Elements with value 42.
   vector<int> v5{10, 42};
   cout << "v5 <size " << v5.size() << ">: ";
   for (auto it = v5.cbegin(); it != v5.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;

   // (f): Can't list-init since 10 is not a string. Initialize to a vector
   // with 10 strings. Value init for the strings calls the default constructor
   // resulting in 10 empty strings.
   vector<string> v6{10};
   cout << "v6 <size " << v6.size() << ">: ";
   for (auto it = v6.cbegin(); it != v6.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;
   
   // (g): Can't list init since 10 is not a string. Initialize a vector with
   // 10 strings with the value "hi".
   vector<string> v7{10, "hi"};
   cout << "v7 <size " << v7.size() << ">: ";
   for (auto it = v7.cbegin(); it != v7.cend(); it++)
   {
       cout << "[" << *it << "]"; 
   }
   cout << endl;
}

