#include <bits/stdc++.h>
using namespace std;

/*code*/

// /**
//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// * /
class Solution
{
public:
    void traverse(TreeNode *root, vector<int> &A)
    {
        if (root == NULL)
            return;
        traverse(root->left, A);
        A.push_back(root->val);
        traverse(root->right, A);
    }
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> A;
        vector<int> B;
        vector<int> M;
        traverse(root1, A);
        traverse(root2, B);
        int i = 0, j = 0;
        while (i < A.size() and j < B.size())
        {
            if (A[i] < B[j])
                M.push_back(A[i++]);
            else
                M.push_back(B[j++]);
        }
        while (i < A.size())
            M.push_back(A[i++]);
        while (j < B.size())
            M.push_back(B[j++]);
        return M;
    }
};