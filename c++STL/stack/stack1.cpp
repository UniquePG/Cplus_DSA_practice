#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // stack works in LIFO property (last in first out)
    stack<int> st;
// stack does not have indexing 
    st.push(32);
    st.push(36);
    st.push(23);
    st.emplace(12);     // (12, 23, 36, 32)

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    
    cout<<st.size()<<endl;

    cout<<st.empty();       // return (false)0 if not empty

    // Traverse stack
cout<<"another stack"<<endl;
    stack <int> s;
    s.push(23);
    s.push(53);
    s.push(22);
    s.push(64);
    s.emplace(34);

    while(!s.empty()){
        cout<< s.top()<<endl;
        s.pop();
    }

    return 0;
}