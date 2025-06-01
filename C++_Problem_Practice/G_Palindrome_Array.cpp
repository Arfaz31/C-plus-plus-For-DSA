#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int a[n];
     for(int i =0; i<n; i++)
     {
         cin >> a[i];
     }
     int flag =0;
      for(int i =0, j=n-1; i<j; i++, j--)
     {
       if(a[i] != a[j])
       {
           flag =0;
           break;
       }else
       {
           flag =1;
             
       }
     }
     if(flag == 1)
     {
         cout << "YES" << endl;
     }else
     {
         cout << "NO" << endl;
     }
    return 0;
}