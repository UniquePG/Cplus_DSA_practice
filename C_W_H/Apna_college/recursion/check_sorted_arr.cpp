#include <iostream>
using namespace std;

bool check(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restarr = check(arr + 1, n - 1);
    return (arr[0] < arr[1] && restarr);
}
int main()
{
    int arr[] = {2, 3, 5, 7, 8};

    cout << check(arr, 5);
    return 0;
}