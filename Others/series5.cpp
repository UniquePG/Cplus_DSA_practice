// x*1 + x*3 + x*5 + x*7......n

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int m =1;
    int count = 1;

    for(int i=1; i<=n; i++){
        if((count%2)!= 0){
            m = i*count;
            cout<<m<<' ';
        }
        count++;
    }
    
    return 0;
}