#include <bits/stdc++.h>
using namespace std;

int main() {

string s;
cin >> s;

while(1)
{
    int index = s.find("EGYPT");
    //by replace function
    // if(index == -1)
    // {
    //     break;
    // }
    // s.replace(index, 5, " ");

    if(index != -1)
    {
        s.erase(index, 5);
        s.insert(index, " ");
    }else{
        break;
    }

}

cout << s << endl;
return 0;








  // string s;
    // cin >> s;
    // size_t pos = s.find("EGYPT"); 
    // while (pos < s.size()) {  
    //     s.replace(pos, 5, " "); 
    //     pos = s.find("EGYPT", pos + 1);
    // }
    //cout << s << endl;
    //return 0;

//find("EGYPT") মানে → s স্ট্রিংয়ের ভিতরে "EGYPT" শব্দটা প্রথম কোথায় আছে, তার starting index দিবে। আমাদের s-এ "EGYPT" আছে index = 7 থেকে শুরু করে:
 //pos < s.size() এখানে চেক করা হচ্ছে: pos = 7, আর s.size() = 18 → 7 < 18 → true
//s.replace(pos, 5, " "); এখানে pos = 7 থেকে শুরু করে ৫টা অক্ষর মুছে ফেলে " " বসাও।
//pos = s.find("EGYPT", pos + 1); 🔍 এখন আবার "EGYPT" খুঁজবো pos+1 = 8 থেকে শুরু করে।

//✅ s.find("EGYPT")

    //স্ট্রিংয়ের ভিতরে "EGYPT" খুঁজে পায়

   // যদি পায়, তাহলে প্রথম অক্ষরের index রিটার্ন করে

    //যদি না পায়, তাহলে string::npos রিটার্ন করে

//     string s, result = "";
//     cin >> s;

//     for (size_t i = 0; i < s.length(); ) {
//         if (s.substr(i, 5) == "EGYPT") {
//             result += ' ';
//             i += 5;  // Skip "EGYPT"
//         } else {
//             result += s[i];
//             i++;
//         }
//     }

//     cout << result << endl;
//     return 0;
}


//result → যেখানে আমরা নতুন স্ট্রিং বানাবো, যেখানে "EGYPT" থাকবে না।


// substr(i, 5) কিভাবে কাজ করে?

//     s.substr(startIndex, length)
//     → startIndex থেকে শুরু করে মোট length সংখ্যক ক্যারেক্টার নেয়।


// else কন্ডিশনে কী হচ্ছে?

// যদি EGYPT না পাওয়া যায়:

//     তাহলে শুধু s[i] ক্যারেক্টারটি result স্ট্রিং-এ যোগ করছি।

//     এবং i++ করে পরের ক্যারেক্টারে যাচ্ছি।


// চলি লুপ ধরে ধরে:
// 🔹 i = 0:

//     s.substr(0, 5) → "BRITI" ≠ "EGYPT"

//     else ব্লকে যাবে → result = "B", i = 1

// 🔹 i = 1:

//     s.substr(1, 5) → "RITIS"

//     else → result = "BR", i = 2

// 🔹 i = 2:

//     s.substr(2, 5) → "ITISH"

//     else → result = "BRI", i = 3

// 🔹 i = 3:

//     s.substr(3, 5) → "TISH" (এখানে ৫ লেটার নেই) → তারপরেও else → result = "BRIT", i = 4

// 🔹 i = 4 → "ISHE" → result = "BRITI", i = 5
// 🔹 i = 5 → "SHEG" → result = "BRITIS", i = 6
// 🔹 i = 6 → "HEGY" → result = "BRITISH", i = 7
// 🔹 i = 7 → এখন আসল জায়গা!
// ✅ s.substr(7, 5) = "EGYPT" ✔️

//     এটা "EGYPT" এর সাথে মিলে গেছে।

// তখন:

// result += ' '; // স্পেস বসালাম
// i += 5;        // EGYPT স্কিপ করলাম

// ➡️ result = "BRITISH ", i = 12
