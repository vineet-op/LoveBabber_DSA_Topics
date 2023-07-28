#include <iostream>
using namespace std;

bool Search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int key;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Enter key to find";
    cin >> key;

    bool found = Search(arr, 5, key);
    if (found)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }
}