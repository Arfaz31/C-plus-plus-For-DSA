#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r, m;
    cin >> l >> r >> m;

    long long product = 1;
    for (int i = l; i <= r; i++) {
        product = (product * i) % m;
    }

    cout << product << endl;
    return 0;
}


//👉 inclusive মানে হলো — L এবং R দুইটাই ধরতে হবে, মানে গুনফলে L থেকে শুরু করে R পর্যন্ত সব সংখ্যাই থাকবে।
// 🔁 Loop from i = 1 to 20:
// i	  Calculation	    Result-(product)
// 1	(1 × 1) % 10007	         1
// 2	(1 × 2) % 10007	         2
// 3	(2 × 3) % 10007	         6
// 4	(6 × 4) % 10007	         24
// 5	(24 × 5) % 10007	     120
// 6	(120 × 6) % 10007	     720
// 7	(720 × 7) % 10007	     5040
// 8	(5040 × 8) % 10007	     3277
// 9	(3277 × 9) % 10007	     949
// 10	(949 × 10) % 10007	     9490
// 11	(9490 × 11) % 10007	     4306
// 12	(4306 × 12) % 10007	     1582
//....continue
//20	(2390 × 20) % 10007	     8707