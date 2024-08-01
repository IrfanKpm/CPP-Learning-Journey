#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main()
{
    // vector<int> marks = {15,19,20,14,18,20,11};
    vector<int> marks;

    for (int i = 0; i <= 5; i++)
    {
        int mark;
        cin >> mark;
        marks.push_back(mark);
    }

    // read method 1
    int len = marks.size();
    for (int j = 0; j < len; j++)
    {
        cout << j << " : " << marks[j] << endl;
    }

    sort(marks.begin(), marks.end());

    // read method 2
    for (int mark : marks)
    {
        cout << mark << endl;
    }

    marks.clear();

    struct Person
    {
        string name;
        int age;
    };

    vector<Person> people;

    people.push_back({"Alice", 30});
    people.push_back({"Bob", 25});
    people.push_back({"Charlie", 20});

    for (vector<Person>::iterator it = people.begin(); it != people.end(); ++it)
    {
        cout << "Name: " << it->name << ", Age: " << it->age << endl;
    }

    vector<int> ages = {24, 25, 41, 35, 26, 20, 28, 32};
    vector<int>::iterator it = find(ages.begin(), ages.end(), 26);
    if (it != ages.end())
    {
        cout << "Found " << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }

    return 0;
}