#include <iostream>
using namespace std;

int main()
{
    ////////////////////
    int score = 42;
    if (score >= 18)
    {
        cout << "passed\n";
    }
    else
    {
        cout << "failed\n";
    }
    ////////////////////
    if (true)
        cout << "true\n";
    ////////////////////
    if (NULL)
    {
        cout << "null passed\n";
    }
    else
    {
        cout << "null not passed\n";
    }
    ////////////////////
    cout << ((7 > 3) ? "condtion true" : "condition false") << endl;
    return 0;
}