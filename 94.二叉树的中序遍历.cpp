/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> res;
        stack<TreeNode *> st;
        TreeNode *node = root;
        // st.push(node);
        // node = node->left;
        while (node || !st.empty())
        {
            if (node)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                node = st.top();
                st.pop();
                res.push_back(node->val);
                node = node->right;
            }
        }
        return res;
    }
    // void traversal(TreeNode *root, vector<int> &res)
    // {
    //     if (root == nullptr)
    //         return;
    //     traversal(root->left, res);
    //     res.push_back(root->val);
    //     traversal(root->right, res);
    // }
    // vector<int> inorderTraversal(TreeNode *root)
    // {
    //     vector<int> res;
    //     traversal(root, res);
    //     return res;
    // }
};
// @lc code=end
