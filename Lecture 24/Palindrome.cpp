#include <iostream>
using namespace std;

char lowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char a[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (lowerCase(a[start]) != lowerCase(a[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    char name[10];
    cout << "Enter String ";
    cin >> name;

    cout << "The string is " << palindrome(name, 4);
}