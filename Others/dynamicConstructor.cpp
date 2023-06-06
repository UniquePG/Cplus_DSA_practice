#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class example
{
    int size;
    int *p;
    public:
        example(int s){
            size = s;
            p = new int[size];  // dynamicaly allot memory to size
        }
        void input(){
            cout<<"Enter numbers"<<endl;
            for(int i = 0; i<size; i++){
                cin>> p[i];
            }
        }
        void output(){
            cout<<"Enter numbers"<<endl;
            for(int i = 0; i<size; i++){
                cout<<p[i]<<endl;
            }
        }
};
int main(){
    int d;
    cout<<"Enter the size of array"<<endl;
    cin>>d;
    example sd(d);
    sd.input();
    sd.output();
    return 0;
}