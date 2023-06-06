#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printvec()
{
    vector<int> v = {1, 4, 6, 7, 9};

    // print vector elements with normal loop condition
    for (int i = 0; i <= 4; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // print with iterators
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Other methords
    for (auto it = v.begin(); it != v.end(); it++) // auto automatic detect datatype
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it : v)
    {
        cout << it << " ";
    }
}

int main()
{
    printvec();
    return 0;
}