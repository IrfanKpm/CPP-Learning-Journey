#include <iostream>
using namespace std;

void changeValue(int a, int b)
{
    a = b;
    cout << "[changeValue] x > " << a << endl;
}

void setTozero(int &a)
{
    a = 0;
    cout << "[setTozero] x > " << a << endl;
}

int main()
{
    int x = 15;
    changeValue(x, 100);
    cout << "[main] x > " << x << endl;
    setTozero(x);
    cout << "[main] x > " << x << endl;
}
