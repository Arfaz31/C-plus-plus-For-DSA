#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2; 
    int x3, y3, x4, y4; 

   
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // Check if the slopes are equal using cross multiplication
    if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1)) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
