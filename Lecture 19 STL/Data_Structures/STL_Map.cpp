// The data stores int the form of key value pairs

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "ABC";
    m[2] = "PQR";
    m[3] = "XYZ";

    // another way
    m.insert({4, "MNO"});

    for (auto i : m)
    {

        cout << i.first << " " << i.second << endl;
    }

    m.erase(3);

    for (auto i : m)
    {

        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {

        cout << (*i).first << endl;
    }
}