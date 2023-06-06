#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// sum of n numbers (paramiterised methord)
void summision(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    summision(i-1, sum+i);
}

// sum of n numbers (functional methord)
int summ(int n){
    if(n==0){
        return 0;
    }
    return n + summ(n-1);
}

// factorial of n(functional)
int fact(int n){
    if(n==1) return 1;
    return n * fact(n-1);
}

// factorial of n (paramiterised)
void fact1(int i, int factt){
    if(i<=1){
        cout<< factt;
        return;
    }
    fact1(i-1, factt*i);
}
int main(){
    int n;
    cin>>n;
    summision(n, 0);
    cout<<endl;

   cout<< summ(n);
   cout<<endl;

   cout<< fact(n);
   cout<<endl;

   fact1(n, 1);
    return 0;
}