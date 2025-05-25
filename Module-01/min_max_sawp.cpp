#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<max(a,b)<<endl;

    cout <<min({3,5,7,8,9}) <<endl;
    cout <<max({3,5,7,8,9}) <<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}