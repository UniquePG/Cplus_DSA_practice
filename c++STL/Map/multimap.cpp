#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, int> ad;  // it stores duplicate keys but in sorted order

    ad.insert(34, 23);
    ad.insert(14, 12);
    ad.insert(14, 13);
    ad.emplace(12, 13);    // ({12, 13}, {14, 12}, {14, 13}, {34, 23})

    for(auto it: ad){
        cout<< it.first<<" "<<it.second<<endl;
    }

// rest functiona are same
    return 0;
}