#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll get_sum(ll L, ll R) {
    return (R * (R + 1)) / 2 - ((L - 1) * L) / 2;
}

ll get_even_sum(ll L, ll R) {
    if (L % 2 != 0) L++; // make L even
    if (R % 2 != 0) R--; // make R even
    if (L > R) return 0;
    ll n = (R - L) / 2 + 1;
    return n * (L + R) / 2;
}

ll get_odd_sum(ll L, ll R) {
    if (L % 2 == 0) L++; // make L odd
    if (R % 2 == 0) R--; // make R odd
    if (L > R) return 0;
    ll n = (R - L) / 2 + 1;
    return n * (L + R) / 2;
}

int main() {
    ll A, B;
    cin >> A >> B;
    ll L = min(A, B);
    ll R = max(A, B);

    cout << get_sum(L, R) << endl;
    cout << get_even_sum(L, R) << endl;
    cout << get_odd_sum(L, R) << endl;

    return 0;
}




// ✅ Step-by-step idea:

// আমরা জানি,
// 👉 1 + 2 + 3 + ... + N = N*(N+1)/2

// ধরো আমরা চাই sum(4 to 6)
// মানে: 4 + 5 + 6

// এখন আমরা দুইটা sum বের করি:

//     sum(1 to 6) = 1 + 2 + 3 + 4 + 5 + 6 = 21

//     sum(1 to 3) = 1 + 2 + 3 = 6

//     তাহলে sum(4 to 6) = 21 - 6 = 15

// 👉 মানে:
// sum(B) - sum(A-1) = sum from A to B


// ✅ উদাহরণ:

// ধরো A = 4, B = 6

//     sum(B) = sum(1 to 6) = 6*(6+1)/2 = 21

//     sum(A-1) = sum(1 to 3) = 3*(3+1)/2 = 6 

// sum(4 to 6) = 21 - 6 = 15