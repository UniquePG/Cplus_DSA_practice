// Multiple recursion calls

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
// find n palendrom number
int palendrom(int n){
    if(n<=1) return n;
    int last = palendrom(n-1);
    int Slast = palendrom(n-2);

    return last + Slast;

}
int main(){
    int n;
    cin>>n;
    cout<< palendrom(n);
    return 0;
}

// Time complexity O(2^n)