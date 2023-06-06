#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// print 1 to n (using backtracking)
void number(int i, int n){
    if(i<1)
    return;
    number(i-1, n);
    cout<<i<<" ";
}

// print n to 1 (using backtraking)
void number1(int i, int n){
    if(i>n)
    return;
    number1(i+1, n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;

    number(n,n);
    cout<<endl;
    number1(1,n);
    return 0;
}