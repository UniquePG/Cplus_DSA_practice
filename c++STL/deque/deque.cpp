#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> de;

    de.push_back(53);
    de.push_back(90);
    de.emplace_back(36);

    for(auto it : de){
        cout<< it <<" ";

    }
    cout<<endl;

    /* 
    NOTE - Rest functions are same 
    (begin, end, rbegin, rend, clear, insert, size, swap) 
    
     */
    return 0;
}