#include <iostream>
using namespace std;

void updateArray(int arr[], int n)
// When you pass array in a function you are passing address of the array , therefore the changes will also get effected in the maain / original Array
{

    cout << "Inside the function" << endl;
    arr[0] = 120;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    cout << "Inside the main" << endl;
    int arr[3] = {1, 2, 3};
    updateArray(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}