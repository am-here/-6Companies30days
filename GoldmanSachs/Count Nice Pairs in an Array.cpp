#include <bits/stdc++.h>
using namespace std;

/*code*/
#define MOD 1000000007
class Solution
{
public:
    int rev(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
    int countNicePairs(vector<int> &nums)
    {
        unordered_map<int, int> M;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i] - rev(nums[i]);
            M[x]++;
            ans = (ans + M[x] - 1) % MOD;
        }
        return ans % MOD;
    }
};