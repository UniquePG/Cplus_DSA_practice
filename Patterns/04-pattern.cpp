/*
* * * * * * * * * *
*                 *
*                 *
*                 *
*                 *
*                 *
*                 *
*                 *
*                 *
* * * * * * * * * *

 */

#include <iostream>
using namespace std;

int main()
{
    int i = 1, j;

    while (i <= 10)
    {
        j = 1;
        while (j <= 10)
        {

            if (i > 1 && j > 1 && i < 10 && j < 10)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}