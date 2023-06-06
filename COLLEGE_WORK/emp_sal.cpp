#include<iostream>
using namespace std;

class emp
{
    char name[10];
    float sal, bonus;
    
    public:
    void get()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter salary"<<endl;
        cin>>sal;
    }
    void calc()
    {
        bonus = (sal*10)/100;
    }
    friend void disp (emp m)
    {
        cout<<"lr"<<m.name<<endl;
        cout<<"lr"<<m.sal<<endl;
        cout<<"lr"<<m.bonus<<endl;
    }
};
    int main()
    {
        emp a;
        a.get();
        a.calc();
        disp(a);
    }