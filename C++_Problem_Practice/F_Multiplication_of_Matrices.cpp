#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int p, q;
    cin >> p >> q;
    int b[p][q];
    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }

    // Check if multiplication possible
    if(m != p) {
        cout << "Matrix multiplication not possible\n";
        return 0;
    }

    int c[n][q];  // Result matrix

   for(int i = 0; i < n; i++)        // C ম্যাট্রিক্সের প্রতিটা রো
{
    for(int j = 0; j < q; j++)    // C ম্যাট্রিক্সের প্রতিটা কলাম
    {
        c[i][j] = 0;              // শুরুতে result 0 ধরছি

        for(int k = 0; k < m; k++) // A এর কলাম = B এর রো
        {
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}


    // Output the result
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < q; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}


// ➤ Matrix A (2×2):

// a = [ [1, 2],
//       [3, 4] ]

// ➤ Matrix B (2×2):

// b = [ [5, 6],
//       [7, 8] ]

// 👉 তাহলে C = A × B এর আকার হবে (2×2)

//  Iteration 1: i = 0, j = 0 → c[0][0]

// c[0][0] = 0;
// k = 0 → c[0][0] += a[0][0] * b[0][0] = 1 * 5 = 5
// k = 1 → c[0][0] += a[0][1] * b[1][0] = 2 * 7 = 14

// ✅ c[0][0] = 5 + 14 = 19

// 🔹 Iteration 2: i = 0, j = 1 → c[0][1]

// c[0][1] = 0;
// k = 0 → c[0][1] += a[0][0] * b[0][1] = 1 * 6 = 6
// k = 1 → c[0][1] += a[0][1] * b[1][1] = 2 * 8 = 16

// ✅ c[0][1] = 6 + 16 = 22

// 🔹 Iteration 3: i = 1, j = 0 → c[1][0]

// c[1][0] = 0;
// k = 0 → c[1][0] += a[1][0] * b[0][0] = 3 * 5 = 15
// k = 1 → c[1][0] += a[1][1] * b[1][0] = 4 * 7 = 28

// ✅ c[1][0] = 15 + 28 = 43

// 🔹 Iteration 4: i = 1, j = 1 → c[1][1]

// c[1][1] = 0;
// k = 0 → c[1][1] += a[1][0] * b[0][1] = 3 * 6 = 18
// k = 1 → c[1][1] += a[1][1] * b[1][1] = 4 * 8 = 32

// ✅ c[1][1] = 18 + 32 = 50

// ✅ Final Result Matrix C:

// c = [ [19, 22],
//       [43, 50] ]