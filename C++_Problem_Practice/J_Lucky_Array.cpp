#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // Find the minimum element
    int min_element = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min_element)
        {
            min_element = a[i];
        }
    }
    
    // Count the frequency of the minimum element
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == min_element)
        {
            count++;
        }
    }
    
    // Check if frequency is odd
    if(count % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    
    return 0;
}