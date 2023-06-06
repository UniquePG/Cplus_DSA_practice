#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    int data2;
    void setdata();
};

void base1::setdata()
{
    data1 = 10;
    data2 = 50;
}

class base2
{
    int getdata1();
    int getdata2();
};

int base2 ::getdata1()
{
    return data1
}
class derived : public base1, public base2
{
    Public : void process();
    void display();
};
int main()
{
    derived obj;
    return 0;
}