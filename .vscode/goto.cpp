#include<iostream>
using namespace std;

int main(){
    int i=1;
    xyz:
    cout<<i<<endl;
    i++;
    if(i<=10)
    {
           goto xyz;
    }



    return 0;
}