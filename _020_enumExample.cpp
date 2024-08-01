#include <iostream>
using namespace std;

enum MsOffice : uint8_t
{
    // BOLD, > BOLD -> 0
    BOLD = 5,
    ITALIC,
    UNDERLINE,
    COSSED
};

int main()
{
    int attr = ITALIC;
    cout << attr << endl;
    return 0;
}