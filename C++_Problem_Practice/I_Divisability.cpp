#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    if (A > B) swap(A, B);

    long long first = ((A + X - 1) / X) * X; // A থেকে প্রথম divisible সংখ্যা
    long long last = (B / X) * X; //B এর নিচে যত বড় সম্ভব X দিয়ে ভাগ যায় এমন সংখ্যা বের করছে।

    if (first > B) {
        cout << 0 << endl;
        return 0;
    }

    long long n = ((last - first) / X) + 1; // মোট কয়টা divisible সংখ্যা
    long long sum = n * (first + last) / 2;

    cout << sum << endl;

    return 0;
}
