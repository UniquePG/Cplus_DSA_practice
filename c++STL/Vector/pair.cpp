#include <bits/stdc++.h> // it includes all the c++ libraries
using namespace std;

int main()
{
    pair<int, int> p = {21, 20};
    cout << p.first << endl;

    // Nested property
    pair<int, pair<int, int>> p1 = {12, {10, 11}};
    cout << p1.second.second << " " << p1.first << endl;

    pair<int, int> arr[] = {{2, 12}, {22, 12}, {10, 78}, {11, 13}};
    cout << arr[2].second;

    return 0;
}