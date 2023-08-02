#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num;

    cout << &num << endl;
    (*ptr)++;
    cout << *ptr;
    cout << "Addres of ptr is : " << ptr;
    cout << "The size of " << sizeof(num);
    cout << "The size of " << sizeof(ptr); // The size of pointer will be always 8 byte

    //* Copying pointer inro another pointer
    int *q = ptr;
    cout << "the valur of q is" << *q << endl;
    cout << "the  of address is" << q << endl;
}