#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;

    s.push("Max");
    s.push("Oreo");
    s.push("Olp");

    cout << s.top();

    s.pop();

    cout << s.top() << endl;
    cout << s.size() << endl;
}