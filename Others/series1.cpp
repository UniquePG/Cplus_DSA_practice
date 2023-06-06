// 1,1,1,2,4,8,3,9,27,4,16.64.5.25.125
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    /* for(int i =1; i<=n; i++){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<" ";
    } */

    // Using goto
xyz:
    if (i <= n)
    {
        cout << i << " " << i * i << " " << i * i * i;
        cout << ", ";
    }
    i++;

    if (i <= n)
    {
        goto xyz;
    }

    return 0;
}