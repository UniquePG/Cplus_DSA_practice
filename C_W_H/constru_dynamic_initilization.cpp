#include <iostream>
using namespace std;

class bankdeposite
{
    int principle;
    int year;
    float rate;
    float returnvalue;

public:
    bankdeposite()
    {
    }
    bankdeposite(int p, int y, float r); // r can be a value like 0.04
    bankdeposite(int p, int y, int r);   // r can be a value like 10
    void show();
};

bankdeposite ::bankdeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    rate = r;

    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {

        returnvalue = returnvalue * (1 + rate);
    }
}

bankdeposite ::bankdeposite(int p, int y, int r)
{
    principle = p;
    year = y;
    rate = float(r) / 100;

    returnvalue = principle;

    for (int i = 0; i < y; i++)
    {

        returnvalue = returnvalue * (1 + rate);
    }
}
void bankdeposite ::show()
{
    cout << endl
         << "principle amount was " << principle
         << " Return vlaue after  " << year << " years "
         << " is " << returnvalue << endl;
}

int main()
{
    bankdeposite bd1, bd2, bd3;

    int p;
    int y;
    float r;
    int R;

    // When r is floting number

    cout << "Enter the value of p, y and r " << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposite(p, y, r);
    bd1.show();
    // When R is int number

    cout << "Enter the value of p, y and R " << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposite(p, y, R);
    bd2.show();

    return 0;
}