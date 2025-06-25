#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2)
        if (n % i == 0) return false;
    return true;
}

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; i++) { 
        if (num % i == 0) {
            if (i * i == num) count++;
            else count += 2;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << "The maximum number : " << a[n - 1] << endl;
    cout << "The minimum number : " << a[0] << endl;

    int primeCount = 0, palindromeCount = 0;
    int maxDivisors = 0, numberWithMaxDiv = 0;

    for (int x : a) {
        if (isPrime(x)) primeCount++;
        if (isPalindrome(x)) palindromeCount++;

        int divs = countDivisors(x);
        if (divs > maxDivisors) {
            maxDivisors = divs;
            numberWithMaxDiv = x;
        } else if (divs == maxDivisors) {
            numberWithMaxDiv = max(numberWithMaxDiv, x);
        }
    }

    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << numberWithMaxDiv << endl;

    return 0;
}



// ✅ উদাহরণ 2: n = 121
// Initial:

//     original = 121

//     reversed = 0

// Step-by-step:
// Step	 n	  n % 10	reversed = reversed * 10 + n % 10	  n = n / 10
// 1	 121  1	        0 * 10 + 1 = 1	                      121 / 10 = 12
// 2	 12	  2	        1 * 10 + 2 = 12	                      12 / 10 = 1
// 3	 1	  1	        12 * 10 + 1 = 121	                  1 / 10 = 0

// Now n = 0, loop ends.

// ➡️ Final reversed = 121, original = 121

// 👉 121 == 121 → Palindrome → return true




//Divisors

// i	36 % i == 0?	i * i == 36?	count increment
// 1	yes	            no	            +2 (1, 36)
// 2	yes	            no	            +2 (2, 18)
// 3	yes	            no	            +2 (3, 12)
// 4	yes	            no	            +2 (4, 9)
// 5	no	            -	            +0
// 6	yes	            yes	            +1 (6 only)

// 👉 Final count: 9
// ⚠️ কেন i * i == num হলে শুধু ১ বার count করি?

// কারণ, 6 × 6 = 36 — এখানে i ও num/i একই, তাই double count করবো না।