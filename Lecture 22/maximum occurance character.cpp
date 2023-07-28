//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here

        int arr[26] = {0};

        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            // lowercase
            int number = 0;
            number = ch - 'a'; // it returns the alphabet
            arr[number]++;
        }

        // finding maximum character

        int maxi = -1, ans = 0;

        for (int i = 0; i < 26; i++)
        {
            if (maxi < arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }

        return 'a' + ans; // it returns a character of maximum occurance by adding 'a' to ans which is index
    }
};