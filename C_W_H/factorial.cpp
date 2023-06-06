#include<iostream>
using namespace std;

int main()
{
    int f=1, n;

    cout<<"Enter the number"<<endl;
    cin>>n;

    do
    {
       f = f*n;
       n--;
       
    } while (n>=1);
     cout<<"The factorial of your number "<< f <<endl;
    
    return 0;

}