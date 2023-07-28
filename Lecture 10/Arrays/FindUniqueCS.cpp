//* XOR operation its basically checks similar elements and return 0 or 1;

int findUnique(int *arr, int size)
{

    int ans = 0;

    for (int i = 0; i < size; i++)
    {

        ans = ans ^ arr[i];
    }

    return ans;
}