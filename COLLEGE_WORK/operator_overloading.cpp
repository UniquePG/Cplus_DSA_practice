#include<iostream>
using namespace std;

class crazyxyz{
    int x,y,z;
    public:
        void get(){
            cout<<"Enter x,y,z"<<endl;
            cin>>x>>y>>z;
        }
        void disp(){
            cout<<"Your numbers is: "<<x<<y<<z;
        }
        void operator-(void){
            x=-x;
            y=-y;
            z=-z;

        }
};
int main(){
    crazyxyz xyz;
    xyz.get();
    xyz.disp();
    -xyz;
    xyz.disp();
    

    return 0;
}