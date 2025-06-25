#include<bits/stdc++.h>
using namespace std;

void fun(int a[], int n)
{
    sort(a, a + n);
    cout <<a[0] << " " << a[n-1] << endl;

};

int main()
{
     int n;
     cin >> n;
     int a[n];
     for(int i = 0; i < n; i++)
     {
         cin >> a[i];
     }
     fun(a, n);
   
    return 0;
}