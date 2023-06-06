#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;

    int even = 0, odd = 0;
    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even += count;
        }
        else
            odd += count;
    }

    cout << "The number of even digits: " << even << endl;
    cout << "The number of odd digits: " << odd << endl;

    return 0;
}