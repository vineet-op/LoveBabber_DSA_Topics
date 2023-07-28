#include <iostream>
using namespace std;

int isPresent(int arr[3][3], int i, int j, int target) // define size, iterators , target
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// sum function
void printsum(int arr[3][3], int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0; // to calculate row sum initialize sum in first for loop i.e rows
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }

        cout << sum << ' ';
    }
}

//* calculate maximum row sum and row index in which it present

void getMaxSum(int arr[3][3], int i, int j)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i; //* it gets row with maximum sum
        }
    }

    cout << " Maximum sum is " << maxi << endl;
    cout << rowIndex;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "Enter element to search ";
    // int target;
    // cin >> target;

    // if (isPresent(arr, 3, 3, target) == 1) // array name , i size , j size , target;
    // {
    //     cout << "Found";
    // }
    // else
    // {
    //     cout << "NotFound";
    // }

    // cout << "The sum of rows is : ";
    // printsum(arr, 3, 3);
    getMaxSum(arr, 3, 3);
}
