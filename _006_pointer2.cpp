#include <iostream>
using namespace std;

int main()
{
    int score = 200;
    int *myp = &score;
    cout << "value of score " << score << endl;
    cout << "value of pointer " << myp << endl;

    int &another_score = score;
    cout << "value of another_score " << another_score << endl;
    another_score = 800;
    cout << "value of another_score " << another_score << endl;
    cout << "value of score " << score << endl;

    return 0;
}
