#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count << endl;

    return 0;
}



// 🔤 Character 1: 'I'

//     এটা একটি letter → isalpha('I') = true

//     !inWord = true (কারণ inWord এখন false)

//     অর্থাৎ: নতুন শব্দ শুরু → count++ → count = 1

//     inWord = true

// 🔤 Character 2: ' ' (space)

//     isalpha(' ') = false

//     non-letter → শব্দ শেষ → inWord = false

// 🔤 Character 3: 'd'

// এখন তোমার প্রশ্ন এখানেই:

//     এখন inWord = false (কারণ আগের স্টেপে আমরা space পেয়েছি)

//     isalpha('d') = true

//     তাহলে !inWord = true

//     তাই: এটা নতুন শব্দের শুরু → count++ → count = 2

//     তারপর inWord = true

// 🔤 Character 4: 'i'

//     letter → isalpha('i') = true

//     inWord = true → !inWord = false

//     মানে: আগের শব্দের ভিতরেই আছি → count বাড়ছে না

// 🔤 Character 5: 'd'

//     letter → আগের মতোই → inWord = true

//     তাই count বাড়ছে না

