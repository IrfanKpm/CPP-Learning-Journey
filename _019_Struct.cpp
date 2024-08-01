#include <iostream>
using namespace std;

struct User
{
    const int uId; // const > not changable by User.uId = x
    const char *name;
    const char *email;
    int cource_count; // changable
};

int main()
{
    User irfan = {1000, "irfan", "irfan@cpp.com", 4};
    User salman = {1001, "salman", "salman@cpp.com", 5};
    cout << irfan.name << " > cource_count " << irfan.cource_count << endl;
    cout << salman.name << " > cource_count " << salman.cource_count << endl;
    salman.cource_count = 6;
    cout << salman.name << " > cource_count " << salman.cource_count << endl;

    User *s = &salman;
    s->cource_count = 4;
    cout << salman.name << " > cource_count " << salman.cource_count << endl;
    cout << salman.name << " > email " << s->email << endl;

    return 0;
}