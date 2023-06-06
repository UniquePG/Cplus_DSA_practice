#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // it store elements according to its priority(larger to smaller)
    priority_queue<int> pq;

    pq.push(23);       // (23)
    pq.push(43);      // (43, 23)
    pq.push(53);      // (53, 43, 23)
    pq.push(11);      // (53, 43, 23, 11)

    cout<<pq.top()<<endl;
    pq.pop();       // pop 53
    cout<<pq.top()<<endl;

    // store elements form smaller to larger
    priority_queue<int, vector<int>, greater<int>> p;

    p.push(32);    // (32)
    p.push(53);    // (32, 53)
    p.push(23);    // (23, 32, 53)
    p.emplace(12); // (12, 23, 32, 53)
    cout<<p.top()<<endl;

    priority_queue<int> pqq;

    pqq.push(2);       // (2)
    pqq.push(4);      // (4, 2)
    pqq.push(5);      // (5, 4, 2)
    pqq.push(3);      // (5, 4, 3, 2)

    pqq.swap(pq);      // swap pqq and pq
    cout<<pqq.top()<<endl;
    cout<<pq.top()<<endl;
    return 0;
}