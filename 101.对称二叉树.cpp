/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSameTree(TreeNode *left, TreeNode *right)
    {
        if (left == nullptr || right == nullptr)
            return left == right;
        bool o = isSameTree(left->left, right->right);
        bool i = isSameTree(left->right, right->left);
        return left->val == right->val && o && i;
    }
    bool isSymmetric(TreeNode *root)
    {
        return isSameTree(root->left, root->right);
    }
    // bool isSameTree(TreeNode *p, TreeNode *q)
    // {
    //     if (p == nullptr || q == nullptr)
    //         return p == q;
    //     return p->val == q->val && isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
    // }
    // bool isSymmetric(TreeNode *root)
    // {
    //     return isSameTree(root->left, root->right);
    // }
};
// @lc code=end
