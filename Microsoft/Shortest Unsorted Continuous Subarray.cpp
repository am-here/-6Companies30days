#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    int findUnsortedSubarray(vector<int> &N)
    {
        vector<int> A = N;
        sort(A.begin(), A.end());
        int a = 0, b = A.size() - 1, c = 0;
        while (a < A.size() and A[a] == N[a++])
            c++;
        if (c == A.size())
            return 0;
        while (b >= 0 and A[b] == N[b--])
            c++;
        return A.size() - c;
    }
};