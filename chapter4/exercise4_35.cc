#include <iostream>
#include <typeinfo>

using std::cout; using std::endl;

int main()
{
    char cval; int ival; unsigned int ui; // [SIC] would prefer uival
    float fval; double dval;

    /* Exercise 4.35
     *
     * Identify any implicit type conversions.
     */
    
    // (a): 'a' is converted to int to be added to 3. 
    // The result of the addition is converted back to char.
    cout << "char int? " << typeid('a').name() << " " << typeid(3).name() << endl;
    cout << "int? " << typeid('a' + 3).name() << endl;
    cval = 'a' + 3;
    cout << "char? " << typeid(cval).name() << endl;


    // (b): First ival is converted to double.
    // Then ui is converted to double. The result, a double, 
    // is then stored converted to float and store in fval.
    cout << "double? " << typeid(ival * 1.0).name() << endl;
    cout << "double? " << typeid(ui - ival * 1.0).name() << endl;
    fval = ui - ival * 1.0;
    cout << "float? " << typeid(fval).name() << endl;

    // (c): ui is converted from unsigned int to float.
    // The result of ui * fval is a float, which is converted to
    // double to be stored in dval.
    cout << "unsigned int? " << typeid(ui).name() << endl;
    cout << "float? " << typeid(fval).name() << endl;
    cout << "float? " << typeid(ui * fval).name() << endl;
    dval = ui * fval;
    cout << "double? " << typeid(dval).name() << endl;

    // (d):
    // Addition is left associative. 
    // 
    // ival is converted to float, ival + fval is converted from float
    // to double. The result of all additions is converted to char.
    // Why anyone would do this is a mystery.
    cout << "int float double? " << typeid(ival).name() << " "
         << typeid(fval).name() << " " << typeid(dval).name() << endl;
    cout << "float? " << typeid(ival + fval).name() << endl;
    cout << "double? " << typeid(ival + fval + dval).name() << endl;
    cval = ival + fval + dval;
    cout << "char? " << typeid(cval).name() << endl;
}
