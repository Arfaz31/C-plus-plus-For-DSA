#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline (cin,s);
    stringstream ss(s);
    string word;
    bool flag = false;
    while(ss >> word)
    {
        if(word == "Jessica")
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}







// int main()
// {
//      string s;
//      getline (cin,s);
//       s = " " + s + " ";
//      string x = " Jessica ";

//      int index = s.find(x);
//      if(index == -1)
//      {
//          cout << "NO" << endl;
//      }
//      else
//      {
//          cout << "YES" << endl;
//      }

//     return 0;
// }