#include <iostream>
using namespace std;

class add
{
private:
    int a,b,c;
    
public:

void get()
{
    cout << "Enter two number";
    cin >> a >> b;
}
void calc()
{
    c = a+b;
}
void disp()
{
    cout << c;
}
};
int main()
{
    add s;
    s.get();
    s.calc();
    s.disp();
}
