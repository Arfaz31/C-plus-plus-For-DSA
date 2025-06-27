#include<bits/stdc++.h>
using namespace std;

int main() {
    string n; 
    long long x;
    cin >> n >> x;

    long long remainder = 0;
    for (char digit : n) {
        remainder = (remainder * 10 + (digit - '0')) % x;
    }

    if (remainder == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}




// 🧮 Step-by-step Calculation:
// Initial:

// remainder = 0

// Iteration 1: digit = '1'

// remainder = (0 * 10 + ('1' - '0')) % 3
//           = (0 + 1) % 3
//           = 1 % 3
//           = 1

// 🔸 এখন remainder = 1
// Iteration 2: digit = '5'

// remainder = (1 * 10 + ('5' - '0')) % 3
//           = (10 + 5) % 3
//           = 15 % 3
//           = 0

// 🔸 এখন remainder = 0