#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;

    ls.push_back(4);
    ls.push_back(9);
    ls.emplace_back(10);

    ls.push_front(1);      // add item at front
    for(auto it : ls){
        cout<< it<<" ";
    }
    cout<<endl;

    /* 
    NOTE - Rest functions are same 
    (begin, end, rbegin, rend, clear, insert, size, swap) 
    
     */
    return 0;
}