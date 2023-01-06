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
    bool validSquare(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &d)
    {
        set<double> A;
        A.insert(D(a, b));
        A.insert(D(a, c));
        A.insert(D(a, d));
        A.insert(D(b, c));
        A.insert(D(b, d));
        A.insert(D(c, d));
        auto v = A.begin();
        return A.size() == 2 and *v != 0;
    }
};