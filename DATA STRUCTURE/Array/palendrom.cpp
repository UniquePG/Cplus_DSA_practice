#include <iostream>
using namespace std;

int main()
{

    // check Palendrom
    int n;
    cout << "Enter lenght of the word: " << endl;
    cin >> n;

    cout << "Enter the word: " << endl;
    char arr[n + 1];
    cin >> arr;

    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << "Word is a palendrom";
    }
    else
    {
        cout << "Word is NOT palendrom";
    }

    return 0;
}