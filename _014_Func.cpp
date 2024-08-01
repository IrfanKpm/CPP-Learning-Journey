#include <iostream>
using namespace std;

// Function prototype
int add(int x, int y);

void sayTwo()
{
    cout << "2\n";
}
int returnTree()
{
    return 3;
}

int main()
{
    sayTwo();
    cout << 2 + returnTree() << endl;
    cout << add(6, 5) << endl;
    return 0;
}

int add(int x, int y)
{
    return x + y;
}