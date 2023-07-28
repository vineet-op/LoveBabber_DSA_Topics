#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Initializing array size and and elemnt 1
    vector<int> v2(5, 1);

    // Copy one vector to another
    vector<int> last(v2);

    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << " Capacity is " << v.capacity() << endl;
    v.push_back(10);
    cout << " Capacity is " << v.capacity() << endl;
    v.push_back(10);
    cout << " Capacity is " << v.capacity() << endl;
    v.push_back(10);
    cout << " Capacity is " << v.capacity() << endl;

    cout << "The size is" << v.size() << endl;

    // for printing vector through stl
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // pop back=> removes last element
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Clear vector = size0
    v.clear();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}