#include <iostream>
#include <queue>
using namespace std;

int main()
{

    priority_queue<int> q;                               // By default max heap
    priority_queue<int, vector<int>, greater<int>> mini; // Creating of min heap
    q.push(4);
    q.push(7);
    q.push(8);
    q.push(10);

    int n = q.size();

    for (int i = 0; i < n; i++)
    {
        cout << q.top() << endl;
        q.pop();
    }
    cout << endl;

    mini.push(100);
    mini.push(11);
    mini.push(101);
    mini.push(0);

    int j = mini.size();

    for (int k = 0; k < j; k++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }
    cout << endl;

    cout << "Khali hai kya ? " << mini.empty();
}