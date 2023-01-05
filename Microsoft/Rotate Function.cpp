#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    int maxRotateFunction(vector<int> &A)
    {
        int fsum = 0, sum = 0;
        for (int i = 0; i < A.size(); i++)
        {
            sum += A[i];
            fsum += (A[i] * i);
        }
        int ans = fsum;
        for (int i = 0; i < A.size() - 1; i++)
        {
            fsum -= sum;
            fsum += A[i] * A.size();
            ans = max(ans, fsum);
        }
        return ans;
    }
};