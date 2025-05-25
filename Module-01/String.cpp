#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x;
 cin >> x;
 cin.ignore(); //ignore the newline (Enter key)
 char s[100];
 cin.getline(s,100);
 cout << x << endl <<  s << endl;
 
 return 0;
}