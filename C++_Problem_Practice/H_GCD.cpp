#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;  
        a = temp;
    }
    return a;
}

// Function to calculate LCM
long long lcm(long long a, long long b, long long gcd_value) {
    return (a / gcd_value) * b; // Avoid overflow
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long gcd_val = gcd(A, B);
    long long lcm_val = lcm(A, B, gcd_val);

    cout << gcd_val << " " << lcm_val << endl;

    return 0;
}



//  Step 1: GCD বের করা (Euclidean Algorithm দিয়ে)


//     GCD(a, b) = GCD(b, a % b), a % b  মানে হচ্ছে a কে b দিয়ে ভাগ করলে যত **ভাগশেষ (remainder)** থাকে। যতক্ষণ না b = 0 হয়।

// 🔁 Iteration-1:

// a = 12, b = 18
// → a % b = 12 % 18 = 12
// → নতুন a = 18, নতুন b = 12

// এখন, 12 ÷ 18 করলে:
//     18 দিয়ে 12 ভাগ যায় না, কারণ 12 < 18
//     তাই ভাগফল = 0, আর ভাগশেষ = 12


// 🔁 Iteration-2:

// a = 18, b = 12
// → a % b = 18 % 12 = 6
// → নতুন a = 12, নতুন b = 6

// 🔁 Iteration-3:

// a = 12, b = 6
// → a % b = 12 % 6 = 0
// → নতুন a = 6, নতুন b = 0

// 🔚 b = 0 হওয়ায় loop থেমে যায়। এখন a = 6 — এটিই GCD.

// ✅ Final GCD = 6