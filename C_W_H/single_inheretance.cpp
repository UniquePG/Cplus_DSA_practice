#include <iostream>
using namespace std;

// When we publicly inherited class
/* class base
{
    int data1; //private by default and is not inheritable

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}
class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "the value of data 1 " << getdata1() << endl;
    cout << "the value of data 2 " << data2 << endl;
    cout << "the value of data 3 " << data3 << endl;
}
int main()
{
    derived obj;
    obj.setdata();
    obj.process();
    obj.display();

    return 0;
} */

// when we private inheritade the class
class base
{
    int data1; //private by default and is not inheritable

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;

    // cin>>data1>>data2;       // get value from the user
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}
class derived : private base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    setdata();
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "the value of data 1 " << getdata1() << endl;
    cout << "the value of data 2 " << data2 << endl;
    cout << "the value of data 3 " << data3 << endl;
}
int main()
{
    derived obj;
    // obj.setdata();       // We can not call setdata directly
    obj.process();
    obj.display();

    return 0;
}