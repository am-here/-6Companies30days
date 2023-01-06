#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    int maxPoints(vector<vector<int>> &A)
    {
        int ans = 0;
        if (A.size() <= 2)
            return A.size();
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = i + 1; j < A.size(); j++)
            {
                double x1 = A[i][0] * 1.0;
                double y1 = A[i][1] * 1.0;
                double x2 = A[j][0] * 1.0;
                double y2 = A[j][1] * 1.0;
                int cc = 2;
                for (int k = j + 1; k < A.size(); k++)
                {
                    double x = A[k][0] * 1.0;
                    double y = A[k][1] * 1.0;
                    if ((x2 - x1) * (y - y1) == (x - x1) * (y2 - y1))
                        cc++;
                }
                ans = max(ans, cc);
            }
        }
        return ans;
    }
};