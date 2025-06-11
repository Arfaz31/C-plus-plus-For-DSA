#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string digits;
    cin >> digits;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += digits[i] - '0';  // char থেকে int এ রূপান্তর
    }

    cout << sum << endl;
    return 0;
}
