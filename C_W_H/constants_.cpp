#include<iostream>
using namespace std;

int main()
{
    int a = 34;                        //we can change the value
    cout<<"The value of a was: "<<a<<endl;

    a = 45;
    cout<<"The value of a is: "<<a<<endl;

    //Constants of C++
    
    const int b =78;                    //We can not change the value 
    cout<<"The value of b is: "<<b<<endl;

   /*  b = 43;
    cout<<"The value of b is: "<<b<<endl; */    //This line throw error because b is constants



    return 0;
}