#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int math_marks;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student topper;
        for (int i = 1; i <= 3; i++)
        {
            Student temp;
            cin >> temp.id >> temp.name >> temp.section >> temp.math_marks;

            if (i == 1)
            {
                topper = temp;
            }
            else
            {
                if (temp.math_marks > topper.math_marks)
                {
                    topper = temp;
                }
                else if (temp.math_marks == topper.math_marks)
                {
                    if (temp.id < topper.id)
                    {
                        topper = temp;
                    }
                }
            }
        }

        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.math_marks << endl;
    }

    return 0;
}
