#include <iostream>
using namespace std;

int getlen(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter Name";
    cin >> name;

    cout << getlen(name);

    return 0;
}