/*
55555
54444
54333
54322
54321
 */
#include <iostream>
using namespace std;        

int main()
{
    int i = 1, j,num;

    while (i <= 5)      // this is for the uper loop
    {   
        j=1;
        num = 5;
        while (num > 5-i)
        {
            cout << num << " ";
            num--;
        }
        while (j<=5-i )
        {
            cout << 5-i+1 << " ";
            j++;  
        }
        i++;
        cout << endl;
    }
    return 0;
}