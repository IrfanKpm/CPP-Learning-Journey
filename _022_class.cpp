#include <iostream>
#include <string>
using namespace std;

class Staff
{
public:
    int id;
    string name;
    int age;
    string role;

    Staff(int id, const string &name, int age) : id(id), name(name), age(age) {};

    void sayName() { cout << "my name is " << name << endl; }

    ~Staff() { cout << "Destructor called"; }
};

int main()
{
    Staff s1(100, "irfan", 20);
    s1.sayName();
    s1.role = "cpp developer";
    cout << s1.role << endl;

    return 0;
}
