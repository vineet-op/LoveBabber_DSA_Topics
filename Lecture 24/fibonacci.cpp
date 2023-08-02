#include <iostream>
using namespace std;

int main()
{
    int t1 = 0;
    int t2 = 1;
    int t3;
    int number;

    cout << "enter Number of the range";
    cin >> number;
    cout << "The  terms are " << t1 << " " << t2 << " ";

    for (int i = 2; i < number; i++)
    {
        t3 = t1 + t2;
        cout << t3 << " ";

        t1 = t2;
        t2 = t3;
    }

    return 0;
}