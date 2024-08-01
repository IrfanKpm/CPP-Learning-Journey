#include <iostream>
using namespace std;

int main()
{
    char my_name[] = "irfan";
    for (int i = 0; my_name[i] != 0; i++)
    {
        cout << "char at " << i << " > " << my_name[i] << endl;
    }
    for (char j : my_name)
    {
        if (j == 0)
            break;
        cout << "char > " << j << endl;
    }
    return 0;
}