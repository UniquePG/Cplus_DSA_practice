#include <iostream>
using namespace std;

void printarry(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionsort(int *arr, int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++) // loop for passes
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) // loop for each paas
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {12, 14, 54, 6, 9, 11};
    int n = 6;

    printarry(arr, n);
    insertionsort(arr, n);
    printarry(arr, n);

    return 0;
}

/* 
Dry run1:- 0   1   2   3  4  5
          12, 14, 54, 6, 9, 11  ->       
 */

/* 
    Time compelexity of bubble sort --> O(n*n)
    insertion sort is adaptive 
*/