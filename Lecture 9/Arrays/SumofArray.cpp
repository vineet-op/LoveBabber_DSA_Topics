#include <iostream>
using namespace std;

int SumofArr(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int arr[10], size;
    cout << "Enter size of array";
    cin >> size;

    cout << "Enter elements";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result = SumofArr(arr, size);
    cout << "Sum of array elements: " << result << endl;
}