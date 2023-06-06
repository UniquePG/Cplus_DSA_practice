#include<iostream>
using namespace std;

class B{
    public:
        void show(){
            cout<<"Show of B"<<endl;
        }
        virtual void disp(){
            cout<<"Disp of B"<<endl;
        }
        void fun1(){
            cout<<"Fun1 of B"<<endl;
        }
};

class D: public B{
    public:
        void show(){
            cout<<"Show of D"<<endl;
        }
        void disp(){
            cout<<"Disp of D"<<endl;
        }
        void fun2(){
            cout <<"fun2 of D"<<endl;
        }
};
int main(){
    B b *bp;
    D d;
    bp = &b;
    bp->show();
    bp->disp();
    bp->fun1();

    bp = &d;
    bp->show();
    bp->disp();
    bp->fun1();

    
    return 0;
}