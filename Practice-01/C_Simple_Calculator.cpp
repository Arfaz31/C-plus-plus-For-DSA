#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int sum = a + b;
   long long mult = (long long)a * b; // use long long to avoid overflow
    int sub = a - b;

    cout << a << " + " << b << " = " << sum << endl;
    cout << a << " * " << b << " = " << mult << endl;
    cout << a << " - " << b << " = " << sub << endl;

    return 0;
}
