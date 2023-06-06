#include<iostream>
using namespace std;

int x,y;
class bsc2
{
    float multiply;
    public:
    void pk(){
        cout<<"\n Enter two number is ";

        cin>>x>>y;
        multiply = x*y;

        cout<<"\n The mul of two number is "<<multiply;
    }
};

class bsc1
{
    float min;
    public:
    void pk(){
        min = x - y;
        cout<<"\n The min of two number is "<<min;
    }
};

class bsc
{
    float sum;
    public:
    void pk(){
        sum = x+y;
        cout<<"\n The sum of two number is "<<sum;


    }
};

int main(){
    bsc2 i;
    i.pk();
    bsc1 j;
    j.pk();
    bsc k;
    k.pk();
    
    return 0;
}