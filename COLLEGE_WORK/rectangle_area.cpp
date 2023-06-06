#include<iostream>
#include<conio.h>
using namespace std; 
class area
{
private:
    int l,b,A;

public:

void get()
{
    cout<<"Enter the l and b of rectangle" << endl;    //endl for line break in output
    cin>>l >> b;
    
}

void calc()
{
    A = l*b;
}

void disp()
{
    cout<<"The area of rectangle is: " <<A;
}
};
int main()
{
    area s;
    s.get();
    s.calc();
    s.disp();
    getch();
}
