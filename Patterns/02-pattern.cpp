/* 
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1
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
            if ((i + j) % 2 == 0)
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
        cout<<endl;
    }
    return 0;
}