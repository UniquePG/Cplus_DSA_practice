#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a=3 , b=45 , c=45346;

    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    //*********setw manupulaters********

    cout<<"The value of a is: "<<setw(4)<<a<<endl;    //for using setw() we need to add iomanip header file
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    return 0;


}