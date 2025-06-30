#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;

    cout << fixed << setprecision(9) << sqrt(dx * dx + dy * dy) << endl;
    return 0;
}


// double x = 3.1415926535;

// 🔸 1. cout << setprecision(4) << x;

//     এখানে fixed নেই → তাই setprecision(4) মানে মোট 4 টা significant digit দেখাবে।

//     Output হবে: 3.142

//     2. cout << fixed << setprecision(4) << x;

//     এখানে fixed আছে → তাই setprecision(4) মানে দশমিকের পর 4 টি ঘর।

//     Output হবে: 3.1416