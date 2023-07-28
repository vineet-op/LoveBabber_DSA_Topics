class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int total = nums.size();
        int sum = 0;
        int leftSum = 0;

        // Calculate the total sum of all elements in the array
        for (int i = 0; i < total; i++)
        {
            sum += nums[i];
        }

        // Iterate through each index and check if it's a pivot point
        for (int i = 0; i < total; i++)
        {
            if (leftSum == sum - leftSum - nums[i])
            {
                return i;
            }
            leftSum += nums[i];
        }

        return -1; // No pivot index found
    }
};