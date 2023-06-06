#include<iostream>
using namespace std;

int main(){
    int a;
    int* b =&a;

    int c;
    int* d = &c;

    int f;

    cout<<"Enter the number a "<<endl;
    cin>>a;
    
    cout<<"Enter the number c "<<endl;
    cin>>c;

    f = *b * *d;

    cout<<"This is the product "<<f<<endl;


    return 0;
}