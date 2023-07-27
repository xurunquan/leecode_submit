/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 二叉树的右视图
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
    vector<int> ans = {};
    void f(TreeNode *node, int depth)
    {
        if (node == nullptr)
            return;
        if (depth == ans.size())
            ans.push_back(node->val);
        f(node->right, depth + 1);
        f(node->left, depth + 1);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        f(root, 0);
        return ans;
    }
};
// @lc code=end
