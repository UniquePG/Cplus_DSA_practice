#include<iostream>
using namespace std;

int add(int,int);   /* Pass and return both */

int main()
{
    int a=2, b=3, c;
    c=add(a,b);
    cout<<c;

}
int add(int x, int y)
{
    return (x+y);
}