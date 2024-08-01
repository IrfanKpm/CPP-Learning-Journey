#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Create a list of integers
    list<int> numbers;

    // Insert elements at the end of the list
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Insert elements at the beginning of the list
    numbers.push_front(5);
    numbers.push_front(0);

    // Print all elements in the list
    cout << "Elements in the list:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Remove elements by value
    numbers.remove(20);
    cout << "Elements in the list after removing 20:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Insert elements at a specific position
    auto it = numbers.begin();
    ++it; // Move iterator to the second position
    numbers.insert(it, 15);
    cout << "Elements in the list after inserting 15 at second position:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Erase elements by iterator
    it = numbers.begin();
    ++it; // Move iterator to the second position (value 15)
    numbers.erase(it);
    cout << "Elements in the list after erasing second element:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Clear the list
    numbers.clear();
    cout << "Elements in the list after clearing:" << endl;
    if (numbers.empty())
    {
        cout << "The list is empty." << endl;
    }

    return 0;
}
