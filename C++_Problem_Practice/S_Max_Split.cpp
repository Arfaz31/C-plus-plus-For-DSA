#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    string result[500]; // Maximum possible splits
    int count = 0;
    int balance = 0;
    int start = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'L')
            balance++;
        else
            balance--;
        
        if(balance == 0)
        {
            result[count] = s.substr(start, i - start + 1); //string.substr(start, length), start index থেকে শুরু করে মোট length সংখ্যক ক্যারেক্টার কেটে নেওয়া হবে।
            count++;
            start = i + 1;
        }
    }
    
    cout << count << endl;
    for(int i = 0; i < count; i++)
    {
        cout << result[i] << endl;
    }
    
    return 0;
}




// s.substr(start, i - start + 1) → মূল স্ট্রিং থেকে একটি অংশ কেটে নিচ্ছে।
// ধরো,

//     s = "LLRRLLRR"

//     start = 0, i = 3 হলে:

// s.substr(0, 3 - 0 + 1) → s.substr(0, 4) → "LLRR"

// তাহলে এটা result[count] এর মধ্যে রেখে দিচ্ছে।
// মানে, result[0] = "LLRR" (যদি count তখন 0 হয়)।

// result[count] = ... → সেই অংশকে result অ্যারেতে জমা রাখছে।

// for loop → সব জমা রাখা balanced substring প্রিন্ট করছে।
// ধরো:

// result[0] = "LLRR"
// result[1] = "LLRR"
// count = 2

// তাহলে আউটপুট হবে:

// LLRR
// LLRR