// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      string str;
//      while(getline(cin, str))
//      {
//         sort(str.begin(), str.end());

//      int len = str.length();
//    for(int i = 0; i < len; i++)
// {
//     if(str[i] != ' ')
//         cout << str[i];
// }
//         cout<<endl;
       
//      }
     

//     return 0;
// }



//step-2 --------------------------------------


#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while(cin.getline(s, 100001))
    {
        int len = strlen(s);
        sort(s, s + len);          
        
        for(int i = 0; i < len; i++)
        {
            if(s[i] != ' ')                     {
                cout << s[i];
            }
        }
        cout << endl;
    }
     

    return 0;
}