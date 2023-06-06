#include<iostream>
using namespace std;

class base{
    protected:
     int a;
    private:
     int b;


};
/* 
For a protected member:
                        public derivation     private derivation    protected derivation
    1. Private member       not                    not                  not
    3. public member        public                  private             protected
    2. protected member     protected               private             protected
 */
class derived: protected base{


};
int main(){
    base b;
    derived d;

    // cout<<d.a;      //will not work since a is protected in both as well as derived class
    return 0;
}