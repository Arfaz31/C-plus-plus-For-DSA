#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
        int n, target;
        cin >> n;
        cin >> target;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int flag =0;
 for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
        {
            int sum = a[i] + a[j] + a[k];
            if( sum == target)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
        }
        if(flag)
        {
            break;
        }
        }
           
if (flag ==0)
{
    cout << "NO" << endl; 
}

     }
    return 0;
}