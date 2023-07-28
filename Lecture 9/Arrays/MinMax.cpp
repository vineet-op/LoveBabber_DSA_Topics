#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
int main()
{

    int size;
    cout << "Enter the size of the array";
    cin >> size;
    int arr[100];

    cout << "Enter No";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Max" << getMax(arr, size) << endl;
    cout << "Min" << getMin(arr, size) << endl;
}