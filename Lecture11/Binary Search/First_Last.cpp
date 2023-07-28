#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}

int LasttOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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

    return ans;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 4, 5};

    FirstOcc(arr, 6, 4);
    LasttOcc(arr, 6, 4);
    cout << "This First Occuraance of 4 is " << FirstOcc(arr, 6, 4) << endl;
    cout << "This First Occuraance of 4 is " << LasttOcc(arr, 6, 4) << endl;
}