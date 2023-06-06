/*
10001
01010
00100
01010
10001
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 1, j;

    while (i <= 5)
    {
        j = 1;
        while (j <= 5)
        {
            if (j == i)
            {
                cout << "1 ";
            }
            else if (j % 2 == 0 && i % 2 == 0 || i == 1 && j == 5 || i == 5 && j == 1)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}


/* 
    we can use this ladder also

            // else if (i == 1 && j == 5 || i == 5 && j == 1)
            // {
            //     cout << "1 ";
            // }
            // else if (i == 5 && j == 1)
            // {
            //     cout << "1 ";
            // }
 */