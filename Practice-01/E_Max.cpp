#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_num = INT_MIN; // Initialize max_num with the first element

    for (int i = 1; i < n; i++) {
        max_num = max(max_num, a[i]); // Update max_num using the max() function
    }

    cout << max_num;

    return 0;
}