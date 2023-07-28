#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    // Pushing at end
    d.push_back(1);

    // Pushing at end
    d.push_front(2);

    d.push_front(0);

    // pop front
    // d.pop_front();

    // cout << "Printing 0 index element => " << d.at(0) << endl;
    // for (int i : d)
    // {
    //     cout << i << ' ';
    // }

    cout << "before erasing size" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 2);
    cout << "after erasing size" << d.size() << endl;

    for (int i : d)
    {
        cout << i << ' ';
    }
}