#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(2, 100);      // (100, 100)

    v.insert(v.begin(), 50);    // (50 100 100)
    for(auto it : v){
        cout<< it<<" ";
    }
cout<<endl;
    v.insert(v.begin()+1, 2,10);    // (50 10 10 100 100) insert 10, 2times at begin+1
    for(auto it : v){
        cout<< it<<" ";
    }
    cout<<endl;

    // merge two vector
    vector<int> v1 = {12, 14, 15};
    vector<int> v2 = {22, 10};

    v1.insert(v1.begin(), v2.begin(), v2.end());
    for(auto it : v1){
        cout<< it<<" ";
    }
    cout<<endl;
    
   cout<< v2.size()<<endl;  // size of vector

    v2.pop_back();      // pop last element
    for(auto it : v2){
        cout<< it<<" ";
    }
    cout<<endl;

    // swap vector
    vector<int> a = {1, 2, 4};
    vector<int> b = {5, 6, 7};
    a.swap(b);

    cout<<"after swaping vector a is: ";
    for(auto it : a){
        cout<< it<<" ";
    }cout<<endl;

    cout<<"after swaping vector b is: ";
    for(auto it : b){
        cout<< it<<" ";
    }
    cout<<endl;

    v2.clear();     // erase vector

    cout<<v2.empty();

    return 0;
}