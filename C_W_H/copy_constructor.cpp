#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    //When no copy constructor is found, compilar suppiles its own copy constructor
    number(number &obj)
    {
        cout << "Copy constrctor called!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number of this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(x); //copy constructor invoked
    z1.display();

    z2 = z;        //copy constructor not called
    z2.display();

    number z3 = z; //copy constructor invoked
    z3.display();
    
    //z1 should exacly resemble z or x or y

    return 0;
}