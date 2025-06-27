#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    cout << sum << endl;
    return 0;
}


// তাহলে আমরা 1 থেকে √12 ≈ 3.46 → অর্থাৎ i = 1 থেকে 3 পর্যন্ত চেক করব।
// ✅ Step-by-step Execution:
// Step 1: i = 1

//     12 % 1 == 0 → divisor

//     sum += 1

//     1 ≠ 12/1 → sum += 12
//     🔹 sum = 1 + 12 = 13

// Step 2: i = 2

//     12 % 2 == 0 → divisor

//     sum += 2

//     2 ≠ 12/2 → sum += 6
//     🔹 sum = 13 + 2 + 6 = 21

// Step 3: i = 3

//     12 % 3 == 0 → divisor

//     sum += 3

//     3 ≠ 12/3 → sum += 4
//     🔹 sum = 21 + 3 + 4 = 28

// 🔚 Final Output:

// ✅ Divisors of 12 = 1, 2, 3, 4, 6, 12
// 👉 Sum = 1 + 2 + 3 + 4 + 6 + 12 = 28
