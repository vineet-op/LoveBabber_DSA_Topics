#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
    cout << *p;
}
int main()
{

    int num = 6;
    int *p = &num;

    print(p);
    update(p);
}