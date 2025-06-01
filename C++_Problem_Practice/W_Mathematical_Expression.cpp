#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    char op, eq;

    cin >> a >> op >> b >> eq >> c;

    if (op == '+') {
        if (a + b == c)
            cout << "Yes" << endl;
        else
            cout << a + b << endl;
    } else if (op == '-') {
        if (a - b == c)
            cout << "Yes" << endl;
        else
            cout << a - b << endl;
    } else if (op == '*') {
        if (a * b == c)
            cout << "Yes" << endl;
        else
            cout << a * b << endl;
    }

    return 0;
}
