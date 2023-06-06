/* 
        *     
      * * *   
    * * * * * 
  * * * * * * *   
* * * * * * * * * 

 */

#include <iostream>
using namespace std;

int main()
{
    int i = 1, j, space;

    while (i <= 5)
    {
        j = 1;
        space = 1;
        while (space <= (5 - i))
        {
            cout << "  ";
            space++;
        }
        while (j <= 2 * i - 1)
        {
            cout << "* ";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}