#include <iostream>
#include <typeinfo>

int main()
{
    /** >- < Exercise 2.38 > ----------------------------------------------< **/
    /*
     * The difference between auto and decltype is as follows:
    * auto evaluates the type in the least restrictive way possible (???) and 
     * needs an initializer. It ignores top level constants and references
    * unless explicitely specified. It's basically "do what's needed to
     * make this assignment statement work."
    *
     * decltype does not necessarily need an initializer and can analyze an
    * expression without evaluating it. If given a variable it uses the full
     * declared type of the variable including top level const and ref.
    * Including operands such as * & () +-* / result in the compiler 
     * "evaluating" the expression. If an rvalue results its type is used.
    * If an lvalue/object is the final result the type will be a reference.
     */

    // Example of an expression where auto and decltype are equivalent.
    int value = 77;

    // Both evaluate to a new int object with value 77.
    auto auto_var = value;
    decltype(value) decl_var = value;

    std::cout << "auto_var type: " << typeid(auto_var).name() << " vs "
              << "decl_var type: " << typeid(decl_var).name() << std::endl;

    std::cout << "Changing one does not change the other:" << std::endl
              << "auto_var=" << auto_var << " vs " << "decl_var=" << decl_var
              << std::endl;

    auto_var = 5;   
    std::cout << "auto_var = 5; --> "
              << "auto_var=" << auto_var << " vs " << "decl_var=" << decl_var
              << std::endl;

    decl_var = -7;
    std::cout << "decl_var = -7; --> "
              << "auto_var=" << auto_var << " vs " << "decl_var=" << decl_var
              << std::endl;

    // Example where auto and decltype differ:
    const int value2 = -99;

    auto avar2 = value2;             // Just an int. Const ignored.
    decltype(value2) dvar2 = value2; // Const int. Can't change dvar2

    std::cout << "avar2: " << avar2 << std::endl;
    std::cout << "dvar2: " << dvar2 << std::endl;

    // Valid as auto ignores the top level constant.
    avar2 = 0;

    // Invalid as decltype does not.
    //dvar2 = 0;
}

