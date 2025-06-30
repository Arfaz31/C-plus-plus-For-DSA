#include <bits/stdc++.h>
using namespace std;

// Function to add two big integers represented as strings
string addBig(string a, string b) {
    string result = "";
    int carry = 0;

    // Ensure both strings are the same length
    while (a.length() < b.length()) a = '0' + a; //a.length() == b.length() হবে → তখন loop থেমে যাবে
    while (b.length() < a.length()) b = '0' + b;

    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i]-'0') + (b[i]-'0') + carry;
        result += (sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry) result += (carry + '0');

    reverse(result.begin(), result.end());
    return result;
}

// Function to multiply big integer (as string) by small integer (int)
string multiplyBig(string num, int multiplier) {
    string result = "";
    int carry = 0;

    for (int i = num.length() - 1; i >= 0; i--) {
        int product = (num[i] - '0') * multiplier + carry;
        result += (product % 10 + '0');
        carry = product / 10;
    }
    while (carry) {
        result += (carry % 10 + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string n;
    cin >> n;

    cout << addBig(n, "9999") << endl;
    cout << multiplyBig(n, 9999) << endl;

    return 0;
}

//Time complexity: O(N)
//Space complexity: O(N)


// addBig("15", "9999")
// Step 1: Equalize Length

// a = "15" → "0015"
// b = "9999"

// Step 2: Reverse iteration
// i	a[i]	b[i]	carry	sum	 digit	new-carry	result
// 3	'5'	    '9'	     0	    14	  4	       1	      "4"
// 2	'1'	    '9'	     1	    11	  1	       1	      "41"
// 1	'0'	    '9'	     1	    10	  0	       1	      "410"
// 0	'0'	    '9'	     1	    10	  0	       1	      "4100"
// Step 3: Final carry → 1

// result += '1' → "41001"

// Step 4: Reverse

// "41001" → "10014"

// ✅ Final Output:

// addBig("15", "9999") → "10014"



//multiplyBig("10", 9999)
// ▶️ Loop Breakdown:
// 👉 i = 1 (num[1] = '0')

// product = (0) * 9999 + 0 = 0
// digit to result = 0 % 10 = 0 → result = "0"
// carry = 0 / 10 = 0

// 👉 i = 0 (num[0] = '1')

// product = 1 * 9999 + 0 = 9999
// digit to result = 9999 % 10 = 9 → result = "09"
// carry = 9999 / 10 = 999

// 🔁 Loop Done, now handle remaining carry

// while (carry) {
//     result += (carry % 10 + '0');
//     carry /= 10;
// }

//👉 carry = 999
// ➤ 1st iteration:

// carry % 10 = 9 → result = "099"
// carry = 999 / 10 = 99

// ➤ 2nd iteration:

// carry % 10 = 9 → result = "0999"
// carry = 99 / 10 = 9

// ➤ 3rd iteration:

// carry % 10 = 9 → result = "09999"
// carry = 9 / 10 = 0 → loop ends

// 🪞 Reverse result:

// reverse("09999") = "99990"

// ✅ Final Output:

// multiplyBig("10", 9999) = "99990"
