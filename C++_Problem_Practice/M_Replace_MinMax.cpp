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

    int min_num = a[0];
    int max_num = a[0];
    int min_index = 0;
    int max_index = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < min_num)
        {
            min_num = a[i];
            min_index = i;
        }

        if(a[i] > max_num)
        {
            max_num = a[i];
            max_index = i;
        }
    }

    // Swap the min and max values
    swap(a[min_index], a[max_index]);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}