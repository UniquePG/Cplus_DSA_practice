#include <iostream>
using namespace std;

class palendrom
{
    int a, rem, revsnum = 0;

public:
    void getnum(void);
    void reverse(void);
    void checknum(void);
};

void palendrom ::getnum(void)
{

    cout << "Enter your number " << endl;
    cin >> a;
}

void palendrom ::reverse(void)
{

    while (a > 0)
    {

        rem = a % 10; //When we use moduler operator(%), then we get remender value

        a = a / 10; //when we use divide(/), then we get quecent value

        revsnum = (revsnum * 10) + rem;
    }

    cout << "The reverse number is " << revsnum << endl;
}

void palendrom ::checknum(void)
{

    if (revsnum == a)
    {
        cout << "Your number is palendrom ";
    }
    else
    {
        cout << "Your number is not palendrom ";
    }
}
int main()
{
    palendrom p;

    p.getnum();
    p.reverse();
    p.checknum();

    return 0;
}