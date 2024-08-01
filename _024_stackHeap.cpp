#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Define a struct named Student
    struct Student
    {
        string name;
        int mark;
    };

    // Stack allocation of a Student object
    Student s;
    s.name = "irfan"; // Set name to "irfan"
    s.mark = 80;      // Set mark to 80

    // Pointer to the stack-allocated Student object
    Student *sptr = &s;

    // Print the address of the stack-allocated Student object
    cout << "Address of stack-allocated student: " << sptr << endl;

    // Access and print the name using the dereference operator
    cout << "Name using dereference operator: " << (*sptr).name << endl;

    // Access and print the name using the arrow operator
    cout << "Name using arrow operator: " << sptr->name << endl;

    // Heap allocation of a Student object
    Student *sptr2 = new Student();
    sptr2->mark = 100;      // Set mark to 100
    sptr2->name = "salman"; // Set name to "salman"

    // Print the name of the heap-allocated Student object
    cout << "Name of heap-allocated student: " << sptr2->name << endl;

    // Deallocate the heap-allocated Student object
    delete sptr2;

    return 0;
}
