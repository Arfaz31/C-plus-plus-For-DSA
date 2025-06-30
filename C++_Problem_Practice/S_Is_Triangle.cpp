#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && b + c > a && c + a > b) {
        cout << "Valid" << endl;
        double s = (a + b + c) / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(6) << area << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
