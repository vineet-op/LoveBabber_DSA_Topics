#include <iostream>
using namespace std;

inline int getMax(int &a, int &b) // Inline func reduces function call overhead and increase code readibility
{
    return (a > b) ? a : b;
}

int main()
{

    int a = 1;
    int b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a++;
    b++;

    ans = getMax(a, b);
    cout << ans << endl;
}