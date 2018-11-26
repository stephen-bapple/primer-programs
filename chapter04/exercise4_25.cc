#include <iostream>
#include <cstdint>

using std::cout; using std::endl;

int main()
{
    /* Exercise 4.25:
     *
     * 'q' = 0111 0001 (113 dec)
     * -> int:     0000 0000 0000 0000 0000 0000 0111 0001 
     * -> ~ first: 1111 1111 1111 1111 1111 1111 1000 1110
     * -> << 6:    1111 1111 1111 1111 1110 0011 1000 0000
     * 
     * Result =    1111 1111 1111 1111 1110 0011 1000 0000
     *        =    -7296 (dec)
     */
    //int32_t expected_value = 0b11111111111111111110001110000000;
    int32_t expected_value = -7296;
    cout << (~'q' << 6) << " vs " << expected_value << endl;
}

