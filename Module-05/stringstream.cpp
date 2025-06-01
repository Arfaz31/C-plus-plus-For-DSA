#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout << s << endl;
    stringstream ss(s);
    string word;
    int cnt =0;
    while(ss >> word)
    {
        cout << word << endl;
    }
    cout << cnt << endl;
    return 0;
}