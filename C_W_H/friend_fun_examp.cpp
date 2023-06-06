#include <iostream>
using namespace std;

class y;

class x
{
    int val1;

public:
    void setValue(int x1)
    {
        val1 = x1;
    }

    void disp()
    {
        cout << val1 << endl;
    }

    friend void exchange(x &, y &);
};

class y
{
    int val2;

public:
    void setValue(int x1)
    {
        val2 = x1;
    }

    void disp()
    {
        cout << val2 << endl;
    }

    friend void exchange(x &, y &);
};

void exchange(x &c1, y &c2)
{
    int temp = c1.val1;
    c1.val1 = c2.val2;
    c2.val2 = temp;
}
int main()
{
    x obj1;
    y obj2;

    obj1.setValue(35);
    obj2.setValue(75);

    exchange(obj1, obj2);

    cout << "The value of val1 after exchanging the value: ";
    obj1.disp();

    cout << "The value of val2 after exchanging the value: ";
    obj2.disp();

    return 0;
}