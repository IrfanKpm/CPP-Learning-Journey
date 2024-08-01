#include <iostream>
using namespace std;

int main()
{
    string name;
    // Prompt the user to enter their name and read it using getline
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    int x;
    // Prompt the user to enter a number and read it using cin
    cout << "\n\nEnter a number: ";
    cin >> x;

    // condition > if,else if,else
    if (x < 0)
    {
        cout << "Entered number is negative";
    }
    else if (x == 0)
    {
        cout << "Entered number is zero";
    }
    else
    {
        cout << "Entered number is positive";
    }

    return 0;
}
