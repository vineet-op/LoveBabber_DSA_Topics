class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1;     // pointer for nums1 (starting from the end)
        int j = n - 1;     // pointer for nums2
        int k = m + n - 1; // pointer for the merged array

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] >= nums2[j]) // to put biggest element in last
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // Copy remaining elements of nums2
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
