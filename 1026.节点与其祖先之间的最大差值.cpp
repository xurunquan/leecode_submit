/*
 * @lc app=leetcode.cn id=1026 lang=cpp
 *
 * [1026] 节点与其祖先之间的最大差值
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int res = 0;
    void dfs(TreeNode *root, int mn, int mx)
    {
        if (root == nullptr)
            return;
        mn = min(mn, root->val);
        mx = max(mx, root->val);
        res = max(max(root->val - mn, mx - root->val), res);
        dfs(root->left, mn, mx);
        dfs(root->right, mn, mx);
    }
    int maxAncestorDiff(TreeNode *root)
    {
        dfs(root, root->val, root->val);
        return res;
    }
};
// @lc code=end
