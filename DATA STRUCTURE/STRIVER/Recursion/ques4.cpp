#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// reverse an array with 2 variables(l and r)
void reverse(int l, int r, int a[]){
        if(l>=r) return;
        swap(a[l], a[r]);
        reverse(l+1, r-1, a);
}

// reverse an array with 1 variable(i)
void reverse1(int i, int b[]){
    if(i==5/2){
        return;
    }
    swap(b[i], b[5-i-1]);
    reverse1(i+1, b);
};
int main(){
    int a[5] = {3, 5, 6, 2, 7};
    int b[5] = {5, 2, 8, 1, 6};

    reverse(0, 4, a);
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    reverse1(0, b);
    for(int i=0; i<5; i++){
        cout<<b[i]<<" ";
    }


    return 0;
}