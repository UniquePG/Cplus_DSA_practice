#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Print the number of combinations whose sum is K (we can use each element multiple times)

class solution
{
public:
    void findcombination(int i, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (i == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }

        // pick up the element
        if (arr[i] <= target)
        {
            ds.push_back(arr[i]);
            findcombination(i, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }

        findcombination(i + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationsum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0, target, candidates, ans, ds);
        return ans;
    }
};
int main()
{
    vector<int> candidates;
    vector<vector<int>> ans;
    vector<int> ds;
    int target = 7;
    vector<int> arr = {2, 5, 3, 7};

    solution s;
    s.combinationsum(candidates, target);
    s.findcombination(0, target, arr, ans, ds);

    return 0;
}