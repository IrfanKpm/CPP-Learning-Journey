#include <iostream>
#include <set>

using namespace std;

int main()
{
    // Create a set of integers
    set<int> numbers;

    // Insert elements into the set
    numbers.insert(10);
    numbers.insert(5);
    numbers.insert(15);
    numbers.insert(10); // Duplicate element, will be ignored

    // Print all elements in the set
    cout << "Elements in the set:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Check if an element exists in the set
    int searchValue = 5;
    if (numbers.find(searchValue) != numbers.end())
    {
        cout << searchValue << " is found in the set." << endl;
    }
    else
    {
        cout << searchValue << " is not found in the set." << endl;
    }

    // Erase an element from the set
    numbers.erase(15);
    cout << "Elements in the set after erasing 15:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Erase an element by iterator
    auto it = numbers.find(5);
    if (it != numbers.end())
    {
        numbers.erase(it);
    }
    cout << "Elements in the set after erasing 5 by iterator:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Insert multiple elements using insert with initializer list
    numbers.insert({20, 25, 30});
    cout << "Elements in the set after inserting multiple values:" << endl;
    for (const int &num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
