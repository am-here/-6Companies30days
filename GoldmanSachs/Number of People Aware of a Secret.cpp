#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    int peopleAwareOfSecret(int n, int d, int f)
    {
        vector<int> A(n);
        int m = 1e9 + 7;
        int ans = 0;
        A[0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (A[i] == 0)
                continue;
            for (int j = i + d; j < min(i + f, n); j++)
            {
                A[j] = (A[i] + A[j]) % m;
            }
            if (i + f >= n)
                ans = (ans + A[i]) % m;
        }
        return ans;
    }
};