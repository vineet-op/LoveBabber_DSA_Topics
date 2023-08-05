#include <iostream>
using namespace std;

void print(int arr[], int n, int s = 0) // Here we declare s = 0 as default argument
{
    for (int i = s; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    print(arr, 5); // 1 2 3 4 5

    print(arr, 5, 3); // 4 5
}