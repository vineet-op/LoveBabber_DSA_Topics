#include <bits/stdc++.h>

bool isPossible(int n, int m, vector<int> time, int mid)
{

    int studcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + time[i] <= mid)
        {
            pagesum = pagesum + time[i];
        }
        else
        {
            studcount++;
            if (studcount > m || time[i] > mid)
            {
                return false;
            }
            pagesum = time[i];
        }
    }

    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    int s = 0;
    int sum = 0;
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        sum = sum + time[i];
    }

    while (s <= e)
    {
        if (isPossible(n, m, time, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}