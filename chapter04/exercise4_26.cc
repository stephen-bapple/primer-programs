#include <iostream>
#include <cstdint>

using std::cout; using std::endl;

int main()
{

    /* Exercise 4.26: In our grading example in this section, 
     * what would happen if we used unsigned int as the type for quiz1?
     *  
     *  If we used unsigned int as our type instead of unsigned long
     *  we might not be able to store all 30 students because int is
     *  only guaranteed to have at least 16 bits. 
     */
    uint16_t quiz1 = 0; // uint16_t to guarantee 16 bits.

    // We cast quiz1's value to unsigned long, but when we store the result in
    // quiz1 we lost the left 16 bits where #27's grad is stored making quiz1
    // all 0.
    quiz1 |= (1UL << 27);

    // Here we cast quiz1 to ulong again, but it's just all zeros.
    bool status = quiz1 & (1UL < 27); // Did student #27 pass or fail?

    // As a result it appears student #27 failed when they actually passed.
    cout << "Fail or pass? " << status << endl;
    cout << "Should be.. " << (bool)(1UL << 27) << endl;
}

