#include <iostream>
using namespace std;

int main()
{

    // int arr[10] = {2, 5, 9, 10};
    // cout << "Printing of first address" << arr << endl;
    // cout << "Printing of first address" << &arr[0] << endl;
    // cout << "Printing first address " << *arr << endl; // 2

    // cout << *arr + 1 << endl;   //  arr[0] =  2 + 1 = 3
    // cout << *(arr + 1) << endl; // printing value at index position 1 i.e = 5

    // // Another way of printing value of giving in =dex position

    // int i = 3;
    // cout << i[arr] << endl; // 10

    // In array we cannot chnage the address of of index position (symbol table)

    int arr[10] = {1, 7};
    // arr = arr + 1; // eroor marega
    // cout << arr;

    int *ptr = &arr[0];
    cout << "Before " << ptr << endl;
    // ptr = ptr + 1; // shifted 4 bytes forward beacuse of interger is 4 byte
    cout << "After " << ptr << endl;
    int i = 1;
    cout << "value 1" << *(ptr + 1);
}