#include <iostream>
using namespace std;

class A
{
public:
    A()                //condtructor
    {
        cout << "Constructor called"<<endl;
    }
    ~A()               // Distructor
    {
        cout << "Distructor called"<<endl;
    }
};
int main()
{
    A a1, a2;
    {
        cout << "\nInner block";
        A a3;
    }
    cout << "\nouter block";
    return 0;
}