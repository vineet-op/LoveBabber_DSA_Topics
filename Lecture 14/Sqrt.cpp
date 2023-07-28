#include <iostream>
using namespace std;

long long int floorSqrt(int x)
{
    int start = 0;
    int end = x;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;

    while (start <= end)
    {
        long long int square = mid * mid;

        if (square == x)
            return mid;
        else if (square < x)
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

double MorePrecision(int x, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < x; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter NO" << endl;
    cin >> n;
    int tempSol = floorSqrt(n);
    cout << " Answer is " << MorePrecision(n, 3, tempSol) << endl;
    return 0;
}
