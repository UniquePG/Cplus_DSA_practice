#include<iostream>
using namespace std;

class tax;
class emp
{
    char nm[20];
    float sal,tax-amt;

    public:
    void get();
    void disp();
    void calc(tax);
};
class tax
{
    float dedoction,percentage;

    public:
    void get();
    void disp();
    friend void emp :: calc(tax);
};
void emp::get()
{
    cout<<"Enter name and salary";
    cin>>nm>>sal;
}
void tax :: get()
{
    cout<<"Enter dedocation amt & tax percentages";
    cin>>dedocation>>percentage;
}
void emp :: calc(tex s)
{
    float ysal;
    y sal = sal*12;
    y sal = y sal - s.dedocation;

    tax.amt = (ysal* s.percentage)/100;
}
void tax :: disp()
{
    cout<<"ln"<<dedocation;
    cout<<"ln"<<percentage;
}
void emp :: disp()
{
    cout<<"ln"<<nm;
    cout<<"ln"<<sal;
    cout<<"ln"<<tax-amt;
}
int main()
{
    emp e;
    tax t;
    e.get();
    t.get();
    e.calc(t);
    t.disp();
    e.disp();
    
}