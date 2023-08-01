//* Seive of eratosthenes

class Solution
{
public:
    int countPrimes(int n)
    {
        int count = 0;
        vector<bool> isPrime(n, true);

        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                count++;

                for (int j = i * 2; j < n; j = j + i)
                {
                    isPrime[j] = false;
                }
            }
        }

        return count;
    }
};