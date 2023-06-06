#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i = 0, j;

    while (i < 9)
    {
        j = 0;
        while (j < 9)
        {
            int n = 5 - min(min(i, j), min(8 - i, 8 - j));
            cout << n << " ";
            j++;
        }
        i++;
        cout << "\n";
    }
    return 0;
}