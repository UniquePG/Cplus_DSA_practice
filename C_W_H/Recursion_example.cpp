#include<iostream>
using namespace std;


//Febonacci sequence using recursion function
int febonacci(int n){
    if(n<2){
        return 1;
    }

    return febonacci(n-2) + febonacci(n-1);
}
int main(){
    int a;
    cout<<"Enter the term you want to find"<<endl;
    cin>>a;

    cout<<"The term in fibonacci sequence at position "<< a << " is "<< febonacci(a)<<endl;

    return 0;
}