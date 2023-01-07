#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    int minimumCardPickup(vector<int> &c)
    {
        unordered_map<int, int> M;
        int ans = c.size() + 5;
        for (int i = 0; i < c.size(); i++)
        {
            if (M[c[i]])
            {
                ans = min(i - M[c[i]] + 2, ans);
            }
            M[c[i]] = i + 1;
        }
        return (ans == c.size() + 5) ? -1 : ans;
    }
};