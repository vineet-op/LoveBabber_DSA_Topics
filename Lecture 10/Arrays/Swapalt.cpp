#include <iostream>
using namespace std;

void swapalt(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    swapalt(arr, 5);
    printArray(arr, 5);
}
