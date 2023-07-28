void Sort(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && arr[right] == 1 && left < right)
        {
            left++;
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}