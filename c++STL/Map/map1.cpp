#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// map stores in sorted order of key
int main(){
    // map 1st initilization 
    map<int, int> mp;   // first datatype is for key and other is for value

    mp[2] = 5;      // stores 5 in key 2
    mp[3] = 14;      // stores 14 in key 3
    mp[5] = 11;      // stores 11 in key 5
    mp.emplace(7, 8); // store 8 in key 7
    mp.insert({8, 17}); // store 17 in key 8

    for(auto it : mp){
        cout<< it.first<<" "<<it.second<<endl;
    }
cout<<endl;
    // map 2nd initilization
    map<int, pair<int,int>> as;    // key -> int datatype, value-> pair datatype

    as[4] = {5, 6};
    as[9] = {6, 80};
    as.insert({12, {7, 10}});

    for(auto its : as){
        cout<< its.first<< " " <<its.second.first<<" "<<its.second.second<<endl;
    }
cout<<endl;
    // map 3rd initilization
    map<pair<int,int>, int> ad;  // key-> pair datatype, value-> int datatype

    ad[{2,4}] = 12;
    ad[{4,8}] = 11;
    ad[{1,10}] = 2;
    ad.insert({{5, 12}, 121});

    for(auto itt : ad){
        cout<< itt.first.first<<" "<< itt.first.second<<" " << itt.second<<endl;
    }

    // operation on set
    cout<< mp[5]<<endl;
cout<<endl;
    auto idd = as.find(9);
    cout<< (*idd).second.second<<endl;
cout<<endl;
    
    return 0;
}