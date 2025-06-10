#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_count = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        long long num = a[i];

        while (num % 2 == 0) {
            count++;
            num /= 2;
        }

        max_count = max(max_count, count);
    }

    cout << max_count << endl;

    return 0;
}
