#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // Create a map to store username and password
    map<string, string> auth;

    // Insert key-value pairs using insert
    auth.insert({"user1", "password123"});
    auth.insert(make_pair("user2", "securepass456"));

    // Attempt to insert a pair with an existing key using insert
    auto result = auth.insert({"user1", "newpassword"});
    if (!result.second)
    {
        cout << "Key 'user1' already exists. No insertion made using insert." << endl;
    }

    // Emplace key-value pairs
    auth.emplace("user3", "newpass789");
    auth.emplace("user4", "anotherpass101");

    // Attempt to emplace a pair with an existing key
    result = auth.emplace("user2", "changedpass");
    if (!result.second)
    {
        cout << "Key 'user2' already exists. No insertion made using emplace." << endl;
    }

    // Print all entries
    cout << "\nMap contents after insert and emplace:" << endl;
    for (const auto &entry : auth)
    {
        cout << "Username: " << entry.first << ", Password: " << entry.second << endl;
    }

    // Find a key
    cout << "\nFinding keys:" << endl;
    auto it = auth.find("user1");
    if (it != auth.end())
    {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    }
    else
    {
        cout << "Key 'user1' not found." << endl;
    }

    // Erase a key
    auth.erase("user3");
    cout << "\nMap contents after erasing 'user3':" << endl;
    for (const auto &entry : auth)
    {
        cout << "Username: " << entry.first << ", Password: " << entry.second << endl;
    }

    // Erase elements by iterator
    it = auth.find("user4");
    if (it != auth.end())
    {
        auth.erase(it);
    }
    cout << "\nMap contents after erasing 'user4' by iterator:" << endl;
    for (const auto &entry : auth)
    {
        cout << "Username: " << entry.first << ", Password: " << entry.second << endl;
    }

    return 0;
}
