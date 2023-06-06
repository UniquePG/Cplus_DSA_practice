#include <iostream>
#include <climits> //this is for INT_MAX and INT_MIN(minimum and maximum number)
using namespace std;

int main()
{
    int n;

    cout << "Enter your array size: " << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "This is your array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        /* if(arr[i]>maxNo){
            maxNo = arr[i];
        }
        if(arr[i]<minNo){
            minNo = arr[i];
        } */

        // other methord to do this

        maxNo = max(maxNo, arr[i]); //built in function-->max()

        minNo = min(minNo, arr[i]); //built in function-->min()
    }
    cout << "This is maxnum: " << maxNo << endl
         << "This is minnum: " << minNo;

    return 0;
}