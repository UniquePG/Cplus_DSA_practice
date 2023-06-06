#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j <= n - 1)
                cout << " ";
            else
                cout << j;
            j++;
        }
        cout << endl;
    }
    return 0;
}