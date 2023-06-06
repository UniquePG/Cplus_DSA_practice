#include<iostream>
#include<conio.h>
using namespace std;

void add(void);  /* No pass no Return */

int main()
{
    add();
    add();
    getch();
}
void add(void)
{
    int a=2 , b=3, c;
    c=a+b;
    cout<<c;
}