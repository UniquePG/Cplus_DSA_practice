// Find how many number between n that is divisible by a and b

#include<iostream>
using namespace std;

int divisible(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;

    int c3 = n/(a*b);

    return c1+c2-c3;
}
int main(){
    int n, a, b;
    cout<<"Enter number in between you find to number divisible: ";
    cin>>n;
    cout<<"Enter numbers you want to find divisiblity: ";
    cin>>a>>b;

   cout<< divisible(n, a , b);
    return 0;
}