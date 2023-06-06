/* 
1 1 1 1 1 
1 1 1 1 1 
1 1 0 1 1 
1 1 1 1 1 
1 1 1 1 1
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 1, j, k;

    while (i <= 5)
    {
        k = 1;
        j = 1;

        while (k <= 5)
        {
            while (k == 3 && i == 3)
            {
                cout << "0" << " ";
                k++;
            }
            cout << j << " ";
            k++;
        }
        i++;
        cout << endl;
    }

    return 0;
}