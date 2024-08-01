

// Constructor Overloading

#include <iostream>
#include <string>
using namespace std;

class Staff
{
private:
    int id;

public:
    string name;
    string role;

    Staff(int id, const string &name, const string &role) : id(id), name(name), role(role) {};

    void getDetails()
    {
        cout << "{ id : " << id << ", name : " << name << ", role : " << role << " }" << endl;
    }

protected:
    int salery;
};

class CppDev : public Staff
{
    //
};

int main()
{

    Staff s1(100, "irfan", "cpp developer");
    cout << s1.role << endl; // public
    // cout << s1.id;  # private
    s1.getDetails();

    //
};
