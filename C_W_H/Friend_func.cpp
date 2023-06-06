#include <iostream>
using namespace std;

class complex
{
    int a, b;

    friend complex sumcomplex(complex o1, complex o2); // make sumcomplex friend of complex class

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }


    void printnumber()
    {
        cout << "Your complex number is " << a << " + " << b << " i " << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;

    o3.setdata((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}
int main()
{
    complex c1, c2, sum;

    c1.setdata(2, 4);
    c1.printnumber();

    c2.setdata(4, 6);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}


/*
 Properties of friend function

1. Not in the scope of the class
2. since it is not in the scope of  the class, it can not be called from the 
object of that class, (c1.sumcomplex() == invalid)

3.can be invoked without the help of any object

4.usually contains the objects as arguments

5.can be declared inside public or private section of the class

6.it can not access the member directly by their names and need [object_name.member_name]
to access any member.

*/