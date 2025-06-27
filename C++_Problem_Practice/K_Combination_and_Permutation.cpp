#include <bits/stdc++.h>
using namespace std;


long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int A, B;
    cin >> A >> B;

    // ফ্যাক্টোরিয়াল হিসাব
    long long factA = factorial(A);
    long long factB = factorial(B);
    long long factAminusB = factorial(A - B);

    // Combination (NCR) = A! / (B! * (A-B)!)
    long long NCR = factA / (factB * factAminusB);

    // Permutation (NPR) = A! / (A-B)!
    long long NPR = factA / factAminusB;

    cout << NCR << " " << NPR << endl;

    return 0;
}
