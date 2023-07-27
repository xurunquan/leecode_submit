/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    long pre = -__LONG_MAX__;
    bool isValidBST(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        if (isValidBST(root->left) != true)
            return false;
        long x = root->val;
        if (x <= pre)
            return false;
        pre = x;
        return isValidBST(root->right);
    }
};
// class Solution
// {
// public:
//     bool isValidBST(TreeNode *root, long left = -__LONG_MAX__, long right = __LONG_MAX__)
//     {
//         if (root == nullptr)
//             return true;
//         long x = root->val;
//         return left < x && x < right && isValidBST(root->left, left, x) && isValidBST(root->right, x, right);
//     }
// };
// @lc code=end
