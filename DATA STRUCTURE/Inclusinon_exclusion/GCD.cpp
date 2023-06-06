// Find the greatest common factor (GCD/HCF) of two number by uclid algorithm

#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{

    int a, b;
    cout << "Enter the two number: ";
    cin >> a >> b;

    cout << GCD(a, b);

    return 0;
}