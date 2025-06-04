#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin >> s;


//Solve using reverse
// string reversed_s = s;
//     reverse(reversed_s.begin(), reversed_s.end());
    
//     if (s == reversed_s) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }


//solve with two pointer
     int flag =0;
     for(int i=0, j=s.size()-1; i<j; i++, j--)
     {
        if(s[i] != s[j])
        {
            flag =0;
            break;
        }
        else
        {
            flag =1;
        }
     }

     if(flag == 1)
     {
         cout << "YES" << endl;
     }
     else
     {
         cout << "NO" << endl;
     }

    return 0;
}