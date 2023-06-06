#include<iostream>
using namespace std;

int main(){
    // What is the pointer -----> Pointer is a DATA TYPE which holds the address of other data types

    int a = 57;
    int* b = &a;

     // int* b;                 other methord to write pointer
    // b = &a;

    // &(m percent) ---->(address of) operator

    cout<<"the address of a is: "<<&a<<endl;
    cout<<"the address of b is: "<<b<<endl;
    

    //* ----> (value at) Dereference operator

    cout<<"the value of a is: "<<*b<<endl;          //this print the value of a


    // pointer to pointer
    
    int** c = &b;

    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address of c is: "<<**c<<endl;


    return 0;
}