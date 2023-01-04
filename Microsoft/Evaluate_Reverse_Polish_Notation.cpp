#include <bits/stdc++.h>
using namespace std;

/*code*/

class Solution
{
public:
    int evalRPN(vector<string> &T)
    {
        stack<int> S;
        for (auto i : T)
        {
            int x;
            if (i == "+")
            {
                int a = S.top();
                S.pop();
                int b = S.top();
                S.pop();
                x = a + b;
            }
            else if (i == "-")
            {
                int a = S.top();
                S.pop();
                int b = S.top();
                S.pop();
                x = b - a;
            }
            else if (i == "*")
            {
                int a = S.top();
                S.pop();
                int b = S.top();
                S.pop();
                x = a * b;
            }
            else if (i == "/")
            {
                int a = S.top();
                S.pop();
                int b = S.top();
                S.pop();
                x = b / a;
            }
            else
                x = stoi(i);
            S.push(x);
        }
        return S.top();
    }
};