// sum of n numbers

#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int presum = Sum(n - 1);
    return (n + presum);
}
int main()
{
    int n;
    cout << "Enter number: " << endl;
    cin >> n;

    cout << Sum(n);

    return 0;
}