// 1,3,7,13,21,31
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 1;

    for (int i = 1; i <= n; i++)
    {   
        cout << m << " ";
        m = m + (i * 2);
    }
    return 0;
}