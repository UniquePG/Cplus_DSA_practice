// 1,2,5,10,17,26

#include <iostream>
using namespace std;

void series(int n, int a)
{
    for (int i = 1; i <= n + n; i++)
    {
        if ((i % 2) != 0)
        {
            cout << a << " ";
            a += i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a = 1;

    series(n, a);

    return 0;
}