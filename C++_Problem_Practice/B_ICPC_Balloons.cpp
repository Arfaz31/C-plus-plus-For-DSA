#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool first_solve[26] = {false};
        int total_balloons = 0;
        
        for(int i = 0; i < n; i++) {
            char problem = s[i];
            total_balloons += 1; // Every solve gives 1 balloon
            if(!first_solve[problem - 'A']) {
                total_balloons += 1; // Additional balloon for first solve
                first_solve[problem - 'A'] = true;
            }
        }
        
        cout << total_balloons << endl;
    }
    return 0;
}