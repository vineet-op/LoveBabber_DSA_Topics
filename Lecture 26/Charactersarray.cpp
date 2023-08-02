#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // char ch[6] = "hello";

    // cout << arr << endl; // prints address of 0th index
    // cout << ch << endl;  // prints full string

    // char *c = &ch[0];
    // cout << c << endl;  // prints entire string
    // cout << *c << endl; // prints 'h' because is ch[0]

    char temp = 'z';
    char *ptr = &temp;
    cout << ptr << endl;  // prints z and till it does not get null vharacter
    cout << *ptr << endl; // prints only z
}