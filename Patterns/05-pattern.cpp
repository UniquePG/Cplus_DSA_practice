#include <iostream>
using namespace std;

int main()
{
    int i = 1, j;
    while (i <= 20)
    {
        j = 1;
        while (j <= 20)
        {
            if (i > 1 && j > 1 && i < 20 && j < 20)
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