#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i += k) {
        int minVal = INT_MAX;
        
        for(int j = i; j < i + k && j < n; j++) {
            minVal = min(minVal, a[j]);
        }
        cout << minVal << " ";
    }

    return 0;
}
