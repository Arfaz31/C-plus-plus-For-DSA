#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name,int roll,int math,int english)
    {
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }

    void total()
    {
        cout<< "Total marks of "<<name<<" is "<<math+english<<endl;
    }
};

int main()
{
    Student sakib("Sakib",12,90,80);
    sakib.total();
    Student rakib("Rakib",13,90,80);
    rakib.total();
     
    return 0;
}