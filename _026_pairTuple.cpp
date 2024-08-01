#include <iostream>
#include <string>
#include <utility> // For std::pair
#include <tuple>   // For std::tuple

using namespace std;

int main()
{
    // Create a pair with string and int
    pair<string, int> p1;

    // Assign values to the pair
    p1.first = "irfan";
    p1.second = 95; // Use 'second' instead of 'mark'

    // Print the values of the pair
    cout << "Name: " << p1.first << endl;
    cout << "Marks: " << p1.second << endl;

    tuple<pair<string, int>, string, int> t1;
    t1 = make_tuple(p1, "extra info", 123);

    // Access and print values from the tuple
    cout << "Pair Name: " << get<0>(t1).first << endl;
    cout << "Pair Marks: " << get<0>(t1).second << endl;
    cout << "Additional String: " << get<1>(t1) << endl;
    cout << "Additional Integer: " << get<2>(t1) << endl;

    return 0;
}
