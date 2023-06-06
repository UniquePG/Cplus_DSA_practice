#include<iostream>
using namespace std;

int main()
{
    int a = 3, b = 5;
    int c = (a*7) + b;
    int d = (((a*7)+b)-45)+3;      //operator presedence

    cout<<c<<endl;
    cout<<d;
    return 0;
}