#include <bits/stdc++.h>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // Write your code here
    vector<int> ans;

    for (int cols = 0; cols < mCols; cols++)
    {
        if (cols & 1) //* Odd case bottom to top
        {
            for (int rows = nRows - 1; rows >= 0; rows--)
            {
                ans.push_back(arr[rows][cols]);
            }
        }

        else
        { //* even case top to bottom
            for (int rows = 0; rows < nRows; rows++)
            {
                ans.push_back(arr[rows][cols]);
            }
        }
    }

    return ans;
}