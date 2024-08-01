#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << arr[0] << endl;

    int arr2[3] = {};
    arr2[0] = 5;
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;

    cout << "arr2[0] :: " << arr2[0] << endl;
    *arr2 = 10;
    cout << "arr2[0] :: " << arr2[0] << endl;
    // Change the value using pointer dereferencing
    *(arr2 + 1) = 20;
    *(arr2 + 2) = 30;
    cout << "arr2[1] :: " << arr2[1] << endl;
    cout << "arr2[2] :: " << arr2[2] << endl;

    cout << "\n------------------------\n";
    cout << "arr2[3] = {10,20,30}\n";
    int *ap = arr2;
    cout << *ap << endl;
    cout << *(ap++) << endl;
    cout << *ap << endl;
    return 0;
}