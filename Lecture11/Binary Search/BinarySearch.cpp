#include <iostream>
using namespace std;

int BinarySeatch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    int result = BinarySeatch(arr, 5, 2);
    int result1 = BinarySeatch(brr, 6, 6);
    cout << result << endl;
    cout << result1 << endl;
}