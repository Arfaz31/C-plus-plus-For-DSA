#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin >> a;

     char c;
     cin >> c;

     int b;
     cin>>b;

     if( c == '>' && a > b )
     {
        cout << "Right" << endl;
     } else if( c == '<' && a < b )
     {
        cout << "Right" << endl;
     } else if( c == '=' && a == b )
     {
        cout << "Right" << endl;
     } else
     {
        cout << "Wrong" << endl;
     }
     
     

    return 0;
}