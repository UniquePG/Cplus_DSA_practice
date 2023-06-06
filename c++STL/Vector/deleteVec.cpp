#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void deletev(){
    vector<int> v{12, 5, 4, 3, 26};

    v.erase(v.begin() +1);     // delete 5 which is at index 1
    cout<<v[1];

    vector<int> v1 = {12, 53, 21, 52, 67};
    v1.erase(v1.begin()+1, v1.begin()+3);  // delete 53, 21 from v1
    
}
int main(){
    deletev();
    return 0;
}