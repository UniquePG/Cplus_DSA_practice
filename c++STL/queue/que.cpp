#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // queue works on FIFO property (first in first out)
    queue<int> q;

    q.push(32);
    q.push(42);
    q.push(53);
    q.push(78);
    q.push(79);
    q.emplace(23);     //(32, 42, 53, 23)
    cout<<q.front()<<endl;

    q.pop();        // pop 32
    cout<<q.front()<<endl;

    q.back() += 7;      // add 7 in last element
    cout<<q.back();

    // queue traverse
    while(!q.empty()){
        cout<< q.front()<<endl;
        q.pop();
    }



    return 0;
}