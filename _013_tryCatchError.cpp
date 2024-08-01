#include <iostream>
using namespace std;

int main()
{
    float key = 8.2;
    try
    {
        cout << "Running task1...\n";
        cout << "Running task2...\n";
        throw "key";
    }
    catch (int x)
    {
        cout << "int exception handled...\n";
        cout << x << endl;
    }
    catch (float f)
    {
        cout << "float exception handled...\n";
        cout << f << endl;
    }
    catch (...)
    {
        cout << "something went wrong...\n";
    }
    cout << "keep on moving with rest of code\n";
    return 0;
}