#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // Find min/max x and y to define the rectangle bounds
    int x_min = min({x1, x2, x3, x4});
    int x_max = max({x1, x2, x3, x4});
    int y_min = min({y1, y2, y3, y4});
    int y_max = max({y1, y2, y3, y4});

    int n;
    cin >> n;
    while (n--) {
        int xi, yi;
        cin >> xi >> yi;
        if (xi >= x_min && xi <= x_max && yi >= y_min && yi <= y_max) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}





// 🧠 1. প্রাথমিক ধারণা: Axis-aligned Rectangle

// আমাদের দেওয়া ৪টি পয়েন্ট এমন যে, রেক্ট্যাঙ্গেলের দুইটি side X-axis এর সাথে এবং অন্য দুইটি Y-axis এর সাথে সমান্তরাল।

// তাহলে এই রকম rectangle হবে:

// (0,2) +---------+ (2,2)
//        |       |
//        |       |
// (0,0) +---------+ (2,0)

// ✅ 2. Rectangle এর ভিতরে পয়েন্ট থাকলে কী হবে?

// ধরো তুমি একটা পয়েন্ট (xi, yi) চেক করছো।
// এই পয়েন্ট যদি rectangle এর ভিতরে বা boundary-তে থাকে, তাহলে তার অবস্থান অবশ্যই হবে:

// x_min ≤ xi ≤ x_max  
// y_min ≤ yi ≤ y_max

// কেন?

//     x_min = rectangle এর বাম দিক

//     x_max = rectangle এর ডান দিক

//     y_min = নিচের দিক

//     y_max = উপরের দিক

// 👉 এই ৪টা line rectangle এর সীমানা তৈরি করে।
// 🎯 3. উদাহরণ দিয়ে বোঝাই

// ধরো ৪টি পয়েন্ট দেওয়া:

// (0, 0), (0, 2), (2, 0), (2, 2)

// 🔹 তাহলে:

//     x_min = min(0,0,2,2) = 0

//     x_max = max(0,0,2,2) = 2

//     y_min = min(0,2,0,2) = 0

//     y_max = max(0,2,0,2) = 2

// এখন পয়েন্ট (1, 1) আছে কি?

// 🔲 Graphical Representation:

//     y ↑
//       |
//   3   |
//   2   |  (0,2)        (2,2)
//       |    +-----------+
//   1   |    |           |
//   0   |  (0,0)        (2,0)
//       |    +-----------+
//       |
//       +--------------------→ x
//            0     1     2

//     0 ≤ 1 ≤ 2 ✅

//     0 ≤ 1 ≤ 2 ✅
//     ➡️ তাই YES

// ❌ আরেকটা উদাহরণ: (3, 3)

//     0 ≤ 3 ≤ 2 ❌ → false
//     ➡️ তাই NO

