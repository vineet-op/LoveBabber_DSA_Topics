// Used for doubly linklist

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> l;
    list<int> n(5, 100);

    l.push_front(0);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << " " << endl;
    }

    for (int j : n)
    {
        cout << j << " " << endl;
    }
}
