#include<iostream>
using namespace std;

class ifp
{   
    public:
    void pk(int x, int y)
    {
        if(x>y)
        {
            cout<<"\n x is greater: "<<x;
        }
        else
        {
            cout<<"\n y is greater: "<<y;
        }
    }
        void science(int i)
        {
            for (i=1,i<=5,i++)
            {
                cout<<"\n value of i: "<<i; 
            }
        }



    
};

int main()
{
    ifp k;
    k.pk(5,6);
    k.science(0);

}