#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'A';
    char ch1 = 'E';

    for (int i = 1; i <= 11; i++)
    {
        for (int j = 1; j <= 6 - i + 1; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
        ch = 'A';
        ch1 = 'E';
    }
    return 0;
}