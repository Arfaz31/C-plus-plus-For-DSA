#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x1,y1,x2,y2,x3,y3,x4,y4;
     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1))
    cout << "YES";
    else
    cout << "NO";

    return 0;
}