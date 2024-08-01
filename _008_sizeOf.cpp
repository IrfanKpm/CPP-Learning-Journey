#include <iostream>
using namespace std;

int main()
{
    // 1 byte = 8 bit
    cout << "size of 'short int' datatype > byte :: " << sizeof(short int) << " | in bits :: " << sizeof(short int) * 8 << endl;
    cout << "size of 'int' datatype > byte :: " << sizeof(int) << " | in bits :: " << sizeof(int) * 8 << endl;
    cout << "size of 'long int' datatype > byte :: " << sizeof(long int) << " | in bits :: " << sizeof(long int) * 8 << endl;
    cout << "size of 'long long int' datatype > byte :: " << sizeof(long long int) << " | in bits :: " << sizeof(long long int) * 8 << endl;
    return 0;
}