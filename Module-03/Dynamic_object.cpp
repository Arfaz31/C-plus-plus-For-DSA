#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
   
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student *s = new Student(10, 5, 3.45);
    return s;
}

int main()
{
     Student *s = fun();
    cout << s->roll << " " << s->cls << " " << s->gpa << endl;
    return 0;
}