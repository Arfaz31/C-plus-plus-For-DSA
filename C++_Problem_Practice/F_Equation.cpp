#include<bits/stdc++.h>
using namespace std;

// int power(int base, int exponent)
// {
//     int result = 1;
//     for (int i = 0; i < exponent; i++) {
//         result *= base;
//     }
//     return result;
// };


// int calculateEquation(int x, int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i += 2) {
//         if (i == 0)
//             sum += power(x, 0) - 1;  // First term: X^0 - 1
//         else
//             sum += power(x, i);      // Other even terms
//     }
//     return sum;
    
// };

// int main()
// {
//       int x, n;
//     cin >> x >> n;

//     int result = calculateEquation(x, n);
//     cout << result << endl;
//     return 0;
// }


//built in pow function



int main() {
    int x, n;
    cin >> x >> n;

    int sum = 0;

    for (int i = 0; i <= n; i += 2) {
        if (i == 0)
            sum += pow(x, 0) - 1;  // First term: X^0 - 1
        else
            sum += pow(x, i);      // Even powers only
    }

    cout << sum << endl;

    return 0;
}
