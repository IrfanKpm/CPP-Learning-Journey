#include <iostream>
using namespace std;

int main()
{
    unsigned int x = 6; // 0110
    unsigned int y = 9; // 1001

    // Bitwise AND operation
    unsigned int z = x & y;
    cout << "value of x & y > " << z << endl;

    // Bitwise OR operation
    z = x | y;
    cout << "value of x | y > " << z << endl;

    // Bitwise XOR operation
    z = x ^ y;
    cout << "value of x ^ y > " << z << endl;

    // Right Shift
    z = x >> 1;
    cout << "value of x >> 1 > " << z << endl;

    // Not
    z = ~x; // x > 0000 0000 0000 0000 0000 0000 0000 0110 | ~x > 1111 1111 1111 1111 1111 1111 1111 1001
    cout << "value of ~x > " << z << endl;

    return 0;
}