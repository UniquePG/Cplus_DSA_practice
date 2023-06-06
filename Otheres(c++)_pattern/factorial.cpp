#include<iostream>
using namespace std;

int factorial(int n){
    int f = 1;

    do
    {
       f = f*n;
       n--;
       
    } while (n>=1);

    cout<<"The factorial of your number "<< f <<endl;    
    return 0;
}
int main(){
    int n;
    cin>>n;
    
    cout<<factorial(n)<<endl;
    
}