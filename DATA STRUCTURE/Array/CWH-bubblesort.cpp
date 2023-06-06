#include <iostream>
using namespace std;

void bubblesort(int *A, int n)
{
    bool issorted = false; // OR int issorted =0

    for (int i = 0; i < n - 1; i++) // for number of passes in bubble sort(n-1)
    {
        cout << "Working on pass number " << i + 1 << endl;
        issorted = true;
        for (int j = 0; j < n - 1 - i; j++) // for comparision
        {
            if (A[j] > A[j + 1]) // For swaping the element
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                issorted = false;
            }
        }
        if (issorted) // bubble sort adaptive
        {
            return;
        }
    }
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    int A[] = {12, 14, 54, 10, 7, 5};
    // int A[] = {2, 4, 6, 9, 10, 12}; // already sorted array (adaptive)
    int n = 6;

    printArray(A, n); // print array before sort
    bubblesort(A, n); // sorting function
    printArray(A, n); // print array after sorting

    return 0;
}

/*
Time compelexity of bubble sort --> O(n*n)
bubble sort is not adapted but we can make it adaptive
 */