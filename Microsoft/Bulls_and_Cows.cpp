#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    string getHint(string s, string g)
    {
        int b = 0, c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == g[i])
            {
                b++;
                s[i] = 'A';
                g[i] = 'A';
            }
        }
        map<char, int> M1;
        map<char, int> M2;
        for (int i = 0; i < s.size(); i++)
        {
            M1[s[i]]++;
            M2[g[i]]++;
        }
        for (auto i : M1)
        {
            if (i.first != 'A')
            {
                c += min(i.second, M2[i.first]);
            }
        }
        string ans = "";
        string bb = to_string(b);
        ans += bb;
        ans += "A";
        string cc = to_string(c);
        ans += cc;
        ans += "B";
        return ans;
    }
};