#include <iostream>
#include <climits>
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

    int minNum = INT_MAX;
    int maxNum = INT_MIN;

    /*  for(int i=0; i<n; i++){
        if(arr[i]<minNum){
            minNum= arr[i];
        }
        if(arr[i]>maxNum){
            maxNum= arr[i];
        }
    } */

    //**************2nd methord to find minnum and maxnum*************
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = min(minNum, arr[i]); //min / max are a buildin functions
        }
        if (arr[i] > maxNum)
        {
            maxNum = max(maxNum, arr[i]);
        }
    }

    cout << "Minimum number is: " << minNum << endl
         << "Maximum number is: " << maxNum;

    return 0;
}