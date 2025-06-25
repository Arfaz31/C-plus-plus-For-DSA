#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    long long i = 1, count = 0;

    while (sum + i <= N) { 
        sum += i;
        count++;
        i++;
    }

    cout << count << endl;
    return 0;
}


//Time complexity হল O(√N) because i বাড়ছে 1 করে, কিন্তু sum বাড়ছে i^2 এর গতিতে।

//     sum = 1 + 2 + 3 + ... + i = i(i+1)/2 ≈ O(i^2)
//     এখন আমরা চাই:
//     i(i+1)2≤N
//     2i(i+1)​≤N 

// এই শর্ত অনুযায়ী i কত পর্যন্ত যেতে পারবে, সেইটা খুঁজছি।
// 🔶 উদাহরণ দিয়ে ব্যাখ্যা:

// ধরো N = 15

// আমরা দেখি:
// i	sum = 1 + 2 + ... + i	sum ≤ 15?
// 1	1	✅
// 2	3	✅
// 3	6	✅
// 4	10	✅
// 5	15	✅
// 6	21	❌

// তাহলে i সর্বোচ্চ 5 পর্যন্ত যেতে পারে।

// এখন দেখো:
// 2N=30≈5.47
// 2N
// ​=30
// ​≈5.47

// 🟩 সত্যিই, i = 5 পর্যন্ত যাচ্ছে — যা প্রায় √(2N) এর কাছাকাছি।



