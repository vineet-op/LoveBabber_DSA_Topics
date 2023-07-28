#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> s;

    s.insert(45);
    s.insert(454);
    s.insert(485);
    s.insert(5);
    s.insert(45);
    for (auto i : s)
    {
        cout << i << endl; // returns in sorted manner
    }

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl; // returns in sorted manner
    }
    cout << endl;

    cout << "Is 45 present" << s.count(45);

    set<int>::iterator itr = s.find(454);
    // find that number and prints till the end;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl; //
    }
    cout << endl;
}
