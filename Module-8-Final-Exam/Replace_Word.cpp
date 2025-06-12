#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
        string s;
        cin >> s;
        string x;
        cin >> x;
   
       while(1)
       {
    int index = s.find(x);
    if(index == -1)
    {
        break;
    }
    s.replace(index,x.length(),"#");
       }
       cout << s << endl;

     }
    return 0;
}