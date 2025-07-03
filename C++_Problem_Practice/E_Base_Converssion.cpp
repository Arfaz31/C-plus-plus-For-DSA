#include <bits/stdc++.h>
using namespace std;

void print_binary(int n) {
    if (n == 0) return;
    print_binary(n / 2);
    cout << (n % 2);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        if (N == 0) {
            cout << 0 << endl; 
        } else {
            print_binary(N);
            cout << endl;
        }
    }

    return 0;
}
