#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int smallest_sum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int curr = a[i] + a[j] + (j - i);
                smallest_sum = min(smallest_sum, curr);
            }
        }

        cout << smallest_sum << endl;
    }
    return 0;
}
