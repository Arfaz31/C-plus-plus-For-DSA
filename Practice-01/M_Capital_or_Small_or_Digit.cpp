#include<iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        cout << "ALPHA" << endl;
        if (x >= 'a' && x <= 'z')
        {
            cout << "IS SMALL" << endl;
        }
        else
        {
            cout << "IS CAPITAL" << endl;
        }
    }
    else if (x >= '0' && x <= '9')
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}
