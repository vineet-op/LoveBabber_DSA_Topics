bool isPossible(vector<int> &stalls, int k, int mid)
{

    int cowCont = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastPos >= mid)
        {
            cowCont++;

            if (cowCont == k)
            {
                return true;
            }

            lastPos = stalls[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
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