#include<bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
    return n % 2 == 1;
}

bool isBinaryPalindrome(int n)
{
    string bin = "";
    while (n)
    {
        bin += (n % 2) + '0';
        n /= 2;
    }
   string rev=bin;
    reverse(rev.begin(), rev.end());
    return bin == rev;
}

int main()
{
     int n;
     cin >> n;
     if(isOdd(n) && isBinaryPalindrome(n))
     {
         cout << "YES" << endl;
     }
     else
     {
         cout << "NO" << endl;
     }

    return 0;
}