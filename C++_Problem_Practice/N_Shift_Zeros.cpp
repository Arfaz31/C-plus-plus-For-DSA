#include<bits/stdc++.h>
using namespace std;

void func(int a[], int n)
{
  for(int i = 0 ; i < n-1; i++)
    {
       for(int j = i+1 ; j < n; j++)
    {
     if(a[i] < 1)
     {
         int temp =a[i];
         a[i] = a[j];
         a[j] = temp;
     }

    }
    }
  for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

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

    func(a, n);
     
    return 0;
}