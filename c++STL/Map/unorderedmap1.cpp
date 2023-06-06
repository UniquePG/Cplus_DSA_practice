#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> um; //it stores unique keys but random order (unordered)

    um[12] = 123;
    um[11] = 23;
    um[24] = 12;
    um.insert(14, 241);
    um.emplace(13, 241);

   auto it = um.find(11);
   cout<< (*it).second;
    return 0;
}