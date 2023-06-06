#include<iostream>
using namespace std;

int main(){
    int n,i,t;
  do{  
    i=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=10){
        t=i*n;
        cout<<i<<"*"<<n<<"="<<t<<endl;
    i++;
    }
    
}while(n>0);



return 0;

}
