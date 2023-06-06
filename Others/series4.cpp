// 2,8,18,32,50

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 2;
    int m = 0;

    for (int i = 1; i <= n; i++)
    {

        m = (i * a);
        cout << m << " ";
        a += 2;
    }
    return 0;
}