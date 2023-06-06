#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    cout<<"Enter your matrix: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter your number for search: " << endl;
    cin >> key;

    int r = 0, c = m - 1;
    bool flag = false;

    while (r < n && c >= 0)
    {
        if (arr[r][c] == key)
        {
            flag = true;
        }
        if (arr[r][c] > key)
        {
            c--;
        }
        else
            r++;
    }
    if (flag)
    {
        cout << "Element Found!";
    }
    else
        cout << "Element is not present in the matrix";
    return 0;
}