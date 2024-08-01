#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 6, 1, 8, 3, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    // for loop
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "continue....\n";
            continue;
        }
        cout << "at index " << i << " > " << arr[i] << endl;
    }

    // while loop
    cout << "------------------------\n";
    int j = 0;
    while (j <= n)
    {
        cout << "at index " << j << " > " << arr[j] << endl;
        if (arr[j] == 1)
        {
            break;
        }
        j++;
    }
    cout << "------------------------\n";
    int k = 0;
    do
    {
        cout << "at index " << k << " > " << arr[k] << endl;
        if (arr[k] == 8)
        {
            cout << "special value > 8\n";
        }
        k++;
    } while (k <= n);
    return 0;
}