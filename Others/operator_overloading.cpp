#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class overloadingg{
    int x,y,z;
    public:
        void setvalue(int s, int d, int v);
        void display();
        void operator -();

};

void overloadingg:: setvalue(int s, int d, int v){
    x = s;
    y = d;
    z = v;
}
void overloadingg:: display(){
    cout<<"This is your number "<<x<<endl;
    cout<<"This is your number "<<y<<endl;
    cout<<"This is your number "<<z<<endl;
}

void overloadingg:: operator -(){
    x = -x;
    y = -y;
    z = -z;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    overloadingg ss;
    ss.setvalue(a,b,c);
    ss.display();
    -ss;        // overload operator call
    cout<<"Number after overloading"<<endl;
    ss.display();
    return 0;
}