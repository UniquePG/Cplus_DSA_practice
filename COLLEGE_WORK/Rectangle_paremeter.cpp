#include<iostream>
using namespace std; 

class area
{
private:
    int a,b,c;

public:

void get()
{
    cout<<"Enter the l and b of rectangle";
    cin>>a >> b;
    
}

void calc()
{
   c= 2*(a+b);
}

void disp()
{
    cout<<"The paremeter of rectangle is: " <<c;
}
};
int main()
{
    area s;
    s.get();
    s.calc();
    s.disp();

}