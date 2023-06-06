#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }


    void printnum()
    {

        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1(5, 7);
    c1.printnum();

    complex c2(9);
    c2.printnum();

    complex c3(0, 0);
    c3.printnum();

    return 0;
}