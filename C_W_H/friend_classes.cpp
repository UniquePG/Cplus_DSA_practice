#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex); // we only declare here (Not use o1 and o2)
    int sumcompcomplex(complex, complex); // we only declare here (Not use o1 and o2)
};

class complex
{
    int a, b;
    //individually declaring function as friend
    // friend int calculator ::sumRealcomplex(complex , complex ); //Friend Fun (using class function)
    // friend int calculator ::sumcompcomplex(complex , complex ); //Friend Fun (using class function)

    //Alter: Declaring the entire class as friend
    friend class calculator; //make a class as friend

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2) // Here we define sumRealcomplex fun
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2) // Here we define sumRealcomplex fun
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;

    o1.setnumber(2, 4);
    o2.setnumber(6, 7);
    o1.printnumber();
    o2.printnumber();

    calculator calc;
    int result = calc.sumRealcomplex(o1, o2);

    cout << "The sum of real part of o1 and o2 is " << result << endl;

    int resultC = calc.sumcompcomplex(o1, o2);

    cout << "The sum of complex part of o1 and o2 is " << resultC << endl;

    return 0;
}