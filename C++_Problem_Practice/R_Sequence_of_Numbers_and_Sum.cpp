#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n <= 0 || m <= 0) break;

        int sum = 0;
        if (n > m) swap(n, m); // ছোট থেকে বড় করার জন্য swap

        for (int i = n; i <= m; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
