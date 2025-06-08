#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
        string s;
        cin >> s;
        int len = s.size();
        int sum_first = 0;
        int sum_last =0;
        for(int i=0; i<3; i++)
        {
            sum_first += s[i] - '0';
        }
        for(int i=len-3; i<len; i++)
        {
            sum_last += s[i] - '0';
        }
        if(sum_first == sum_last)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
     }

    return 0;
}