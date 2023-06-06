#include<iostream>
using namespace std;

    //**************Scop Resolution Operator*************

int c = 45;

int main()
{
    int a, b, c;

    cout<<"Enter number a: "<<endl;
    cin>>a;

    cout<<"Enter number b: "<<endl;
    cin>>b;

    c=a+b;

    cout<<"The sum is: "<<c<<endl;

    cout<<"The value of global c is: "<<::c<<endl;      //call the global variable value(scop resolution)

    //*************Float, double, long double literals***********

    float d=34.4f;
    long double e=34.4l;

    cout<<"The size of 34.4 is "<< sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is "<< sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is "<< sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is "<< sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is "<< sizeof(34.4L)<<endl;


    //*************Referenace variables************

    float x =455;
    
    float & y = x;      //reference variable

    cout<<x<<endl;
    cout<<y<<endl;



    //*************Typecasting***********


    int h = 45;

    float j =65.56;

    cout<<"The value of h is "<<(float)h<<endl;       //we can change variable type
    cout<<"The value of j is "<<float(h)<<endl;


    cout<<"The value of h is "<<(int)j<<endl;
    cout<<"The value of h is "<<int(j)<<endl;

    int l = int(j);


    cout<<"The expresion is "<<h + j<<endl;
    cout<<"The expresion is "<<h + int(j)<<endl;
    cout<<"The expresion is "<<h + (int)j<<endl;
    
    return 0;
}