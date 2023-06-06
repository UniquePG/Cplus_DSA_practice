#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 7)    //constructor default value
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};
void simple::printdata()
{
    cout << "The value of data1 and data2 is " << data1 << " and " <<data2;
}

int main()
{
    simple s(3,6);
    s.printdata();

    return 0;
}