#include<iostream>
using namespace std;

int add(void);  /* Return but no pass */

int main()
{
    int a;
    a=add();
    cout<<a;
    
}
int add(void)
{
    int x=2, y=3, z;
    z=x+y;
    return z;
}