/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根节点到叶节点数字之和
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
    int sumNumbers(TreeNode *root, int i = 0)
    {
        if (root == nullptr)
            return 0;
        int sum = i * 10 + root->val;
        if (root->right == nullptr && root->left == nullptr)
            return sum;
        return sumNumbers(root->left, sum) + sumNumbers(root->right, sum);
    }
};
// @lc code=end
