#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = s;

    for (int i = 1; i < s.length(); i++) {
        string x = s.substr(0, i);
        string y = s.substr(i);

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        string combined = x + y;
        if (combined < result) {
            result = combined;
        }
    }

    cout << result << endl;
    return 0;
}
