#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // Create a map to store username and password
    map<string, string> auth;

    // Insert some key-value pairs into the map
    auth["user1"] = "password123";
    auth["user2"] = "securepass456";
    auth["user3"] = "mypassword789";

    // Retrieve and print values from the map
    cout << "user1's password: " << auth["user1"] << endl;
    cout << "user2's password: " << auth["user2"] << endl;
    cout << "user3's password: " << auth["user3"] << endl;

    // Check if a key exists in the map
    string username = "user4";
    if (auth.find(username) != auth.end())
    {
        cout << username << "'s password: " << auth[username] << endl;
    }
    else
    {
        cout << username << " not found in the map." << endl;
    }

    // Iterate over the map and print all key-value pairs
    cout << "\nAll stored credentials:" << endl;
    for (const auto &entry : auth)
    {
        cout << "Username: " << entry.first << ", Password: " << entry.second << endl;
    }

    return 0;
}
