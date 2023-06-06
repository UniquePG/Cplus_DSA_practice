// Multiple Inheritance
#include<iostream>
using namespace std;
/* 
Syantax:
class derived : {{visibility-mode}} {{base1}}, {{visibility-mode}} {{base2}}
{

}
 */

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }

};

class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }

};

class derived : public base1, public base2{
        public:
            void show(){
                cout<<"The value of base1 "<<base1int<<endl;
                cout<<"The value of base2 "<<base2int<<endl;
                cout<<"The sum of base1 and base2 "<<base1int + base2int<<endl;

            }
};
/* 
The inherited derived class will look something like this:
Data member:
    base1int->protected 
    base2int->protected
Member Function:
    set_base1int->public
    set_base2int->public
*/
int main(){
    derived obj;
    obj.set_base1int(43);
    obj.set_base2int(35);
    obj.show();

    return 0;
}