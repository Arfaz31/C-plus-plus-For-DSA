// #include <bits/stdc++.h>
// using namespace std;

// void print_digits(int n) {
//     if (n < 10) {
//         cout << n << " ";
//         return;
//     }

//     print_digits(n / 10);         
//     cout << n % 10 << " ";       
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         print_digits(N);
//         cout << endl;
//     }

//     return 0;
// }


// Step 1:

// n = 121
// n < 10 → false
// → call print_digits(121 / 10) → print_digits(12)
// → এরপর হবে cout << 121 % 10 → cout << 1 << " ";

// Step 2:

// n = 12
// n < 10 → false
// → call print_digits(12 / 10) → print_digits(1)
// → এরপর হবে cout << 12 % 10 → cout << 2 << " ";

// Step 3 (Base Case):

// n = 1
// n < 10 → true
// → cout << 1 << " ";
// → return

// 🧠 Stack unwinding (return path):

//     Step 3 prints: 1

//     Step 2 resumes → prints: 2

//     Step 1 resumes → prints: 1 

#include <bits/stdc++.h>
using namespace std;

void print_digits(string &s, int i) {
    if (i == s.length()) return;         // base case
    cout << s[i] << " ";
    print_digits(s, i + 1);              // go to next character
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        print_digits(s, 0);             
        cout << endl;
    }
    return 0;
}
