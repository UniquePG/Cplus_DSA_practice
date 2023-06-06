#include <iostream>
using namespace std;

class abc
{
protected:
    int a;

public:
    void geta();
    void dispa();
};
void abc ::geta()
{
    cout << "Enter number a " << endl;
    cin >> a;
}
void abc ::dispa()
{
    cout << "This is your number a: " << a << endl;
}
class B : public abc
{
protected:
    int b;

public:
    void calcb();
    void dispb();
};
void B ::calcb()
{
    b = 2 * a;
}
void B ::dispb()
{
    cout << "This is your number b: " << b << endl;
}
class C : public B
{
protected:
    int c;

public:
    void calcC();
    void dispC();
};
void C ::calcC()
{
    c = 2 * b;
}
void C ::dispC()
{
    cout << "This is your number c: " << c << endl;
}

int main()
{
    C obj;
    obj.geta();
    obj.dispa();
    obj.calcb();
    obj.dispb();
    obj.calcC();
    obj.dispC();

    return 0;
}