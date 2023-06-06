#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// print numbers from 1 to n
void number2(int i, int n){
    if(i>n)
    return;
    cout<<i<<" ";
    number(i+1,n);
}

// print numbers form n to 1
void number(int i, int n){
    if(i<1)
    return;
    cout<<i<<" ";
    number(i-1,n);
}
int main(){
    int n;
    cin>>n;
    number(n, n);
    number2(1, n);
    return 0;
}