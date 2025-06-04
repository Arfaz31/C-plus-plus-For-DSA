#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersey;

    Cricketer(string country,int jersey)
    {
        this->country=country;
        this->jersey=jersey;
    }
};

int main()
{

    Cricketer* sakib =new Cricketer("Bangladesh",12);
    Cricketer* Rubel = new Cricketer("Bangladesh",22);

    *Rubel=*sakib;
    delete sakib;
    cout<<Rubel->country<<" "<<Rubel->jersey<<endl;
     
    return 0;
}