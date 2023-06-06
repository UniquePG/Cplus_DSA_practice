#include<iostream>
using namespace std;

class greater
{
    int a,b;

    public:
    
    void get(){
        cout<<"Enter the two numbers"<<endl;
        cin>>a>>b;
    }
    void calc;
};
    void greater :: calc()
    {

    if(a>b)
    cout<<"The greater number is a: "<<a<<endl;

    else
        cout<<"The greater number is b: "<<b<<endl;
    
    } 
int main()
{
    greater g;
    g.get();
    g.calc();

    return 0;   
}      