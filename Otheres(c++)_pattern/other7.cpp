#include <iostream>
using namespace std;

class factorialSum
{
    int a;
    int f = 1;
    int s = 0;
    int n = 0;

public:
    void getnumber(void);
    void factorial(void);
    void Sum(void);
        
};

void factorialSum ::getnumber(void)
{
    cout << "Enter your number " << endl;
    cin >> a;
}

void factorialSum ::factorial(void)
{
    while (a >= 1)
    {
        f = f * a;
        a--;
    }
    cout << "This is your factorial " << f << endl;
}

void factorialSum ::Sum(void)
{
    while(a>=1)
    {
        s = s + a;
        a--;
    }
    
    
    cout << "This is your factorial Sum " << s << endl;

    
}

int main()
{
    factorialSum f;
    f.getnumber();
    f.factorial();
    f.Sum();

    return 0;
}