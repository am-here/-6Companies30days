#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    vector<vector<int>> ans;
    // void print(vector<int> V)
    // {
    //     for(auto i: V)
    //     cout << i << " ";
    //     cout << endl;
    // }
    void solve(int val, int ind, vector<int> vec, int sum, int n, int k)
    {
        if (sum == n and ind == k)
        {
            ans.push_back(vec);
            return;
        }
        if (ind == k or sum > n)
            return;
        for (int i = val; i <= 9; i++)
        {
            vec.push_back(i);
            solve(i + 1, ind + 1, vec, sum + i, n, k);
            vec.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        solve(1, 0, {}, 0, n, k);
        return ans;
    }
};