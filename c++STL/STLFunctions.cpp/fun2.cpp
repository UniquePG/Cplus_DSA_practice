#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // find minimum & maximum element of given array / vector
    int n = 5;
    int a[n] = {23, 11, 41, 51, 11};
    vector<int> v = {12, 42, 15, 12, 12};

    cout << "In array: ";
    int min = *min_element(a, a + n); // min_element fun returns pointer of minimum element so we should use * before it
    cout << " min " << min;
    int max = *max_element(a, a + n);
    cout << " max " << max << endl;

    cout << "In vector: ";
    int min1 = *min_element(v.begin(), v.end());
    int max1 = *max_element(v.begin(), v.end());
    cout << "min " << min1 << " max " << max1 << endl;
cout << endl;
    // sum of array / Vector
    int sum = accumulate(a, a + n, 0); // gives the sum of array + intial sum 0
    int sum1 = accumulate(v.begin(), v.end(), 0);

    cout << "Sum of array: " << sum << endl
         << "sum of vector: " << sum1 << endl;
cout << endl;
    // find count of any element
    int cnt = count(a, a + n, 11);            // find count of 11
    int cnt1 = count(v.begin(), v.end(), 12); // find count of 12

    cout << " count of 11 in array: " << cnt << endl
         << " count of 12 in vector: " << cnt1 << endl;
cout << endl;
    // find the element (pointer) from array/ vector

    auto it = find(a, a + n, 41); // it finds location (pointer) so we use *
    auto it1 = find(v.begin(), v.end(), 15);

    cout << "In array element is: " << *it << endl
         << "In vector element is: " << *it1 << endl;
cout << endl;
    // Reverse an array / vector
    reverse(a, a + n);
    reverse(v.begin(), v.end());

    cout << "Reverse of array: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
cout << endl;
    cout << "Reverse of Vector: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
cout << endl;

    return 0;
}