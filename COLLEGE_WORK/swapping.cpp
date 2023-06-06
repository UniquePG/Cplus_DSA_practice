#include<iostream>
using namespace std;

class swapping

{
private:
    int a,b;
public:

void get(){
    cout<<"Enter two numbers";
    cin>>a>>b;
}
void calc(){
   int c;
    c= a;           //a= a+b;
    a= b;           //b= a-b;
    b= c;           //a= a-b;
} 
void disp(){
    cout<<a <<b;
}
};
int main(){
    swapping s;
    s.get();
    s.calc();
    s.disp();
}
