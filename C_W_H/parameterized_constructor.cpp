#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); //parameterized constructor
    void printnum()
    {

        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{

    // Implicit call
    complex c1(4, 7);

    // Explicit call
    complex c2 = complex(5, 8);

    c1.printnum();
    c2.printnum();

    return 0;
}