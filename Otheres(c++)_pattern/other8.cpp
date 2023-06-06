#include<iostream>
using namespace std;

int main(){
    int a;
    int s = 0;
    int n = 0;

    cout<<"Enter your number ";
    cin>>a;

    while (n<=a)
    {
       s = s + (a-n);
       n++;
    }

   /*  while (a>=1)
    {
       s = s + a;
       a--;
    } */
    cout<<"This is your factorial sum "<<s<<endl;

    return 0;
}