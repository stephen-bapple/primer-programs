#include <cstring>
#include <cstddef>
#include <iostream>
using std::cout; using std::endl;

int main()
{
    char str1[] = "abcdefg";
    char str2[] = "hijklmn";

    // -1 because we don't need both null terminators.
    constexpr size_t copy_size = sizeof(str1) / sizeof(str1[0])
                               + sizeof(str2) / sizeof(str2[0]) - 1;
    char str_dest[copy_size];
    
    strcpy(str_dest, str1);
    strcat(str_dest, str2);

    cout << "C string: " << str_dest << endl;
    cout << "Length of string: " << strlen(str_dest) << endl;
    cout << "Length of corresponding array: "
         << sizeof(str_dest) / sizeof(str_dest[0]) << endl;
}

