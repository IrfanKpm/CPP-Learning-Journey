#include <iostream>
using namespace std;

string api_call()
{
    return "got some data from web\n";
}

int main()
{
    auto responce = api_call(); // auto
    cout << "Api responce : " << responce;

    if (typeid(responce) == typeid(string))
    {
        cout << "Type of both ID matches\n";
    }

    return 0;
}