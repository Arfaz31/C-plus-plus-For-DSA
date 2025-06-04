#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        if(s.size() <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int len = s.size();
            // First character + (length - 2) + Last character
            cout << s[0] << len - 2 << s[len - 1] << endl;
        }
    }

    return 0;
}
