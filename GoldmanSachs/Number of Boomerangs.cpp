#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    double D(vector<int> &a, vector<int> &b)
    {
        return (sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2)));
    }
    int numberOfBoomerangs(vector<vector<int>> &A)
    {
        int ans = 0;
        for (int i = 0; i < A.size(); i++)
        {
            map<double, int> M;
            for (int j = 0; j < A.size(); j++)
            {
                if (i != j)
                {
                    M[D(A[i], A[j])]++;
                }
            }
            for (auto i : M)
            {
                if (i.second > 1)
                    ans += i.second * (i.second - 1);
            }
        }
        return ans;
    }
};