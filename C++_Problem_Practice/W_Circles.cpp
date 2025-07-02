#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    double x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // Center of circle A
    double cx1 = (x1 + x2) / 2.0;
    double cy1 = (y1 + y2) / 2.0;

    // Center of circle B
    double cx2 = (x3 + x4) / 2.0;
    double cy2 = (y3 + y4) / 2.0;

//hypot(x, y) simply means: sqrt(x² + y²)

    // Radius of circle A and B
    double r1 = hypot(x2 - x1, y2 - y1) / 2.0; //r1 = √((x2 - x1)² + (y2 - y1)²) / 2

    double r2 = hypot(x4 - x3, y4 - y3) / 2.0;

    // Distance between centers
    double d = hypot(cx1 - cx2, cy1 - cy2); //d = √((cx1 - cx2)² + (cy1 - cy2)²)


    if (d <= r1 + r2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
