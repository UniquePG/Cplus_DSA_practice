#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 6;
    int cnt =  __builtin_popcount(num); // it counts the no. of 1's in the binary of 6
    cout<<cnt<< endl;

    long long a = 384738423864873;
    int count = __builtin_popcountll(a);  // it uses in the long long number
    cout<<count<<endl;

    // pemutation of an string

    string s = "123"; // string should be in sorted order
    string s1 = "342";
    sort(s1.begin(), s1.end());     // sort string s1

    do{
        cout << s1<< " ";

    }while(next_permutation(s1.begin(), s1.end()));   // find all permutalions of string
cout<<endl;

    return 0;
}