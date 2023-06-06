#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbol = {{'{', -1}, {'[', -2}, {'(', -3}, {'}', 1}, {']', 2}, {')', 3}};
string isbalanced(string s)
{
    stack<char> st;

    for (char brackets : s)
    {
        if (symbol[brackets] < 0)
        {
            st.push(brackets);
        }
        else
        {
            if (st.empty())
            {
                return "NO"; // if st.empty is true
            }
            else
            {
                char top = st.top();
                st.pop();
                if (symbol[top] + symbol[brackets] != 0)
                {
                    return "NO";
                }
            }
        }
    }
    if (st.empty()) // if st.empty is true
    {
        return "YES";
    }
    return "NO"; // if st.empty is false
}
int main()
{
    int t;
    cout << "Enter how many string u want to enter: " << endl;
    cin >> t;
    cout << "Enter your string: " << endl;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isbalanced(s) << endl;
    }
    return 0;
}