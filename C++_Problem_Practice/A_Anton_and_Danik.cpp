#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     string s;
     cin >> s;
     stringstream ss(s);
     char l;
     int a =0;
     int d =0;
     while(ss >> l)
     {
        if(l == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
     }
     if(a > d)
     {
        cout << "Anton" << endl;
     }
     else if(a < d)
     {
        cout << "Danik" << endl;
     }
     else
     {
        cout << "Friendship" << endl;
     }
    return 0;
}