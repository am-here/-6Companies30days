#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    vector<string> invalidTransactions(vector<string> &T)
    {
        vector<string> ans;
        vector<string> n;
        vector<int> t;
        vector<int> p;
        vector<string> c;
        for (auto i : T)
        {
            string s1 = "";
            int flag = 1;
            for (auto j : i)
            {
                if (j == ',')
                {
                    if (flag == 1)
                        n.push_back(s1);
                    else if (flag == 2)
                        t.push_back(stoi(s1));
                    else
                        p.push_back(stoi(s1));
                    flag++;
                    s1 = "";
                }
                else
                    s1 += j;
            }
            c.push_back(s1);
        }
        for (int i = 0; i < p.size(); i++)
            if (p[i] > 1000)
                ans.push_back(T[i]);
        for (int i = 0; i < t.size(); i++)
            for (int j = 0; j < t.size(); j++)
                if (n[i] == n[j] and c[i] != c[j])
                    if (abs(t[i] - t[j]) <= 60)
                        if (p[i] <= 1000)
                        {
                            ans.push_back(T[i]);
                            break;
                        }
        return ans;
    }
};