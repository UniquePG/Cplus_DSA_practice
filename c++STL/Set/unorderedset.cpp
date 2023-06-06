#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> us;  //it is Unique but stores in random order(unordered)

    us.insert(23);
    us.insert(12);
    us.insert(2);
    us.emplace(3);
    us.emplace(51); // (23, 12, 3, 2, 51) [any random order]

    for(auto it : us){
        cout<< it << " ";
    }
    return 0;
}

// all functions are same but uper_bound and lower_bound does not works