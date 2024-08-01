#include <iostream>
using namespace std;

int lifeUp()
{
    static int life = 3;
    return ++life;
}

int main()
{
    int life = 3;
    cout << "life initially > " << life << endl;
    life = lifeUp();
    cout << "life after lifeUp() > " << life << endl;
    life = lifeUp();
    cout << "life after lifeUp() > " << life << endl;
    return 0;
}