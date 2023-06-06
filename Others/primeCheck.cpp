#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number " << endl;
    cin >> n;

    int i = 2;
    int count = 0;
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
        i++;
    }

    if (count == 0)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}