#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int *f, n, s;
    cout<<"Enter the number u want to allocate memory"<<endl;
    cin>>n;

    f = (int*) malloc(n*sizeof(int));

    if(f==NULL){
        cout<<"Memory not allocate"<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            cout<<"Enter the value"<<endl;
             cin>>f[i];
        }
    }

    for(int i=0; i<n; i++){
        cout<<f[i]<<" ";
    }
    return 0;
}