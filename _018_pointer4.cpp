#include <iostream>
using namespace std;

int main()
{
    int x = 1000;
    int *ptr1 = &x;

    // Case 1: Pointer to an existing variable
    // ptr1 points to the memory address of the existing variable x.
    // The address stored in ptr1 is the address of x.
    // The value pointed to by ptr1 is the value of x, which is 1000.
    cout << "Case 1: Pointer to existing variable" << endl;
    cout << "Address stored in ptr1: " << ptr1 << endl;    // Print the address stored in ptr1
    cout << "Value pointed to by ptr1: " << *ptr1 << endl; // Print the value pointed to by ptr1

    // Case 2: Pointer to dynamically allocated memory
    // ptr2 points to a dynamically allocated memory location for an integer.
    // The address stored in ptr2 is the address of the newly allocated memory.
    // The value pointed to by ptr2 is initially undefined until it is assigned a value.
    int *ptr2 = new int; // Allocate memory for an integer dynamically
    *ptr2 = x;           // Assign the value of x to the dynamically allocated memory

    cout << "Case 2: Pointer to dynamically allocated memory" << endl;
    cout << "Address stored in ptr2: " << ptr2 << endl;    // Print the address stored in ptr2
    cout << "Value pointed to by ptr2: " << *ptr2 << endl; // Print the value pointed to by ptr2

    delete ptr2;    // Free the dynamically allocated memory
    ptr2 = nullptr; // Set the pointer to nullptr to avoid dangling pointer

    return 0;
}

/*
Case 1:
- `ptr1` is a pointer to the existing variable `x`.
- The address stored in `ptr1` is the address of the variable `x`.
- The value pointed to by `ptr1` is the value of `x` (1000).

Case 2:
- `ptr2` is a pointer to a dynamically allocated memory location.
- The address stored in `ptr2` is the address of the newly allocated memory.
- The value pointed to by `ptr2` is the value assigned to the dynamically allocated memory (1000).
- The memory allocated with `new` must be manually deallocated using `delete` to avoid memory leaks.
- After deleting the dynamically allocated memory, set `ptr2` to `nullptr` to avoid a dangling pointer.
*/

/// dont run here > memmory leak