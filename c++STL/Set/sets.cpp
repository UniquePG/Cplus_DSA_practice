#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // sets stores Unique value in sorted order(can not repeat value in set)
    // sets have indexing
    set<int> se;

    se.insert(23);
    se.insert(21);
    se.emplace(20);
    se.insert(12);  // (12, 20, 21, 23)
    se.insert(23);  // con not insert 23 again

    se.find(20);
    int cnt = se.count(21); // if present return 1 
    cout<<cnt<<endl;

    auto it = se.find(12);
    se.erase(it);        // find 12 and erase it

    for(auto it : se){
        cout<< it<<" ";
    }
    return 0;
}