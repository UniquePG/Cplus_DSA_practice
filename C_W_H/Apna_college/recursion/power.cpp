// Find the sum of n raise to the power p

#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int pre = power(n, (p - 1));
    return n * pre;
}
int main()
{
    int n, p;
    cout << "Enter number n and power p: ";
    cin >> n >> p;

    cout << power(n, p) << endl;

    return 0;
}