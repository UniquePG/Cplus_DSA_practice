#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;     // it is not Unique but stored in sorted order

    ms.insert(21);
    ms.insert(12);
    ms.insert(31);
    ms.insert(31);
    ms.insert(31);
    ms.emplace(21);   // (12, 21, 21, 31, 31, 31)

    ms.erase(21);   // it erase all 21 form multiset (12, 31, 31, 31)

    ms.erase(ms.find(31)); // it erase only single(first) 31 (12, 31, 31)

    int cnt = ms.count(21);
    cout<<cnt<<endl;

    int cnt1 = ms.count(31);
    cout<<cnt1<<endl;
    return 0;
}