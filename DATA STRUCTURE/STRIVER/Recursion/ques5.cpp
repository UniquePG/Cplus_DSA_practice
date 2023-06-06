#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palendrom(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;

    return palendrom(i + 1, s);
}
int main()
{
    string s = "madam";
    cout << palendrom(0, s);
    return 0;
}