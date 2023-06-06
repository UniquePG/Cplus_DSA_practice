#include<iostream>
using namespace std;

void add(int,int);   /*  No return but pass  */

int main()
{
    int a=2,b=3;
    add(a,b);

}
void add(int x, int y)
{
    int z;
    z= x+y;
    cout<<z;
}