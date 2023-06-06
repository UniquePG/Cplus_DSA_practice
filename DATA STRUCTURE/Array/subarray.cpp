// Subarray- continuous part of the array
// number of subarray of an array with n element - nC2 + n (OR) n*(n+1)/2

// Ques -> Sum of all subarray
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int curr = 0;

    cout<<"The sum of all subarray of the enter array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr <<endl;
        }
    }
    return 0;
}