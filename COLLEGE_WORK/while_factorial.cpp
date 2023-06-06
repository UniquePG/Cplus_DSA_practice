#include<iostream>
using namespace std;

int main()
{
    int a, f=1;

    cout<<"Enter number a: "<<endl;
    cin>>a;

    while(a>=1)
    {
        f=f*a;
        a--;

    }
    cout<<"The factorial of number a: "<<f;

    return 0;


    
}