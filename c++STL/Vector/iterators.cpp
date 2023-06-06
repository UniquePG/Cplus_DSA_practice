#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void iterators()
{
    vector<int> s{12, 14, 15, 11, 32}; // OR vector<int> s = {12,14,15,11,32}

    vector<int>::iterator it = s.begin(); // it points to the memory location of the index 0 element
    cout << *(it) << endl;                // to access the value at that location(s.begin)

    it++; // it move to one index and reach at 14
    cout << *(it) << endl;
    it = it + 2; // it moves 2 place and reach at 11
    cout << *(it) << endl;

    vector<int>::iterator itt = s.end(); // points to after the last element
    itt--;                               // reach at last element
    cout << *(itt) << endl;

    vector<int> p = {12, 15, 11, 6};

    cout << p.back() << endl; // access the last element
}
int main()
{

    iterators();
    return 0;
}