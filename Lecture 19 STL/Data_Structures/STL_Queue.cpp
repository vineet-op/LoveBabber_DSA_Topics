#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<string> q;

    q.push("hi");
    q.push("Hello");
    q.push("Bye");

    cout << q.size() << endl;

    q.pop();

    cout << q.size() << endl;
}