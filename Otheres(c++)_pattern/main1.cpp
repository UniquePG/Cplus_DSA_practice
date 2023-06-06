#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            if (i <= 5)
            {
                cout << i;
            }
            else
            {

                cout << 6 - i;
            }
        }
        cout << endl;
    }
    return 0;
}