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

    int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(a[i] > 0)
        {
            pos++;
        }
        else if(a[i] < 0)
        {
            neg++;
        }
    }
    cout << "Even:" << " " << even << endl << "Odd:" << " " << odd << endl << "Positive:" << " " << pos << endl << "Negative:" << " " << neg << endl;
    return 0;
}