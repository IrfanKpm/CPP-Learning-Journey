#include <iostream>
using namespace std;

int main()
{
    int card = 40;
    int my_card = card;
    cout << "value of card is : " << my_card << endl;
    card = 45;
    cout << "value of card is : " << my_card << endl;

    int *ptr_card;
    ptr_card = &card;    // store address of card
    my_card = *ptr_card; // pointer dereference
    cout << "value of card is : " << my_card << endl;
    cout << "value of card is : " << ptr_card << endl;

    card = 100;
    cout << "value of card is : " << *ptr_card << endl;

    return 0;
}
