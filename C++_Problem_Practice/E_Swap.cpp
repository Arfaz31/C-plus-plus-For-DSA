#include<bits/stdc++.h>
using namespace std;


void swap_fun(int &x,int &y)
{
 swap(x,y);
 cout << x << " " << y << endl;
};

int main()
{
     int x,y;
     cin >> x >> y;
     swap_fun(x,y);
    return 0;
}