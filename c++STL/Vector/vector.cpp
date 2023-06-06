#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void vectors(){
    vector<int> v;

    // add element in the vector
    v.push_back(2);         // add 2 in the vector
    v.emplace_back(3);      // add 3 --> {2, 3}
    cout<< v[0]<<endl;

    // pair of vector
    vector<pair<int, int>>v1;

    v1.push_back({12, 14});
    v1.emplace_back(10, 19);      // add pair of element-> {{12,14}, {10,19}}
    cout<<v1[1].second<<endl;

    vector<int> v3(5, 50);        // {50, 50, 50, 50, 50}
    cout<<v3[3]<<endl;

    vector<int> v4(5);          // create empty vector of size 5 with element 0(garbage value), we can also increase the size later
    cout<<v4[2]<<endl;

    vector<int> c(4, 20);
    vector<int> c1(c);         // create vector c1 with the element of c
    cout<<c1[1]<<endl;

}

void iterators(){
    vector<int> s{12,14,15,11,32};      // OR vector<int> s = {12,14,15,11,32}

    vector<int> ::iterator it = s.begin();    //it points to the memory location of the index 0 element
    cout<< *(it)<<endl;
}
int main(){
    
    vectors();
    return 0;
}