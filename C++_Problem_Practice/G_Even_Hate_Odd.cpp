#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
    while(t--)
    {
          int n;
     cin >> n;
     int a[n];
     for(int i=0; i<n; i++)
     {
         cin >> a[i];
     }


     int even=0, odd=0;
     for(int i=0; i<n; i++)
     {
         if(a[i]%2==0)
         {
             even++;
         }
         else
         {
             odd++;
         }
     }

    
    if(n%2 !=0)
    {
        cout << -1 << endl;
    } else{
  
    int count= abs(even - odd) / 2;
    cout << count << endl;
    }
    }
    return 0;
}