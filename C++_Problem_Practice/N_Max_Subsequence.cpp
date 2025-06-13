#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int count = 1; // প্রথম ক্যারেক্টারকে ধরি
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) { //যদি পরের অক্ষর আগেরটার থেকে আলাদা হয়, তখনই count বাড়াই
            count++;
        }
    }

    cout << count << endl;
    return 0;
}




// String: "ababb"
// Index গুলো:

//   a  b  a  b  b
//   0  1  2  3  4

// Step-by-step:

//     Step 0: ধরলাম a → তাই count = 1

//     Step 1: s[1] = b ≠ s[0] = a → count++

//     Step 2: s[2] = a ≠ s[1] = b → count++

//     Step 3: s[3] = b ≠ s[2] = a → count++

//     Step 4: s[4] = b == s[3] = b → একরকম, তাই count বাড়বে না

// 👉 Final count = 4