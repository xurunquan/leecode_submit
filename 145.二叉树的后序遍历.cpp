/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        vector<int> res;
        if (!root)
            return {};
        st.push(root);
        while (!st.empty())
        {
            auto node = st.top();
            st.pop();
            // if (node)
            res.push_back(node->val);

            if (node->left)
                st.push(node->left);
            if (node->right)
                st.push(node->right);
        }
        reverse(res.begin(), res.end());
        return res;
    }
    // void traversal(TreeNode *root, vector<int> &res)
    // {
    //     if (root == nullptr)
    //         return;
    //     traversal(root->left, res);
    //     traversal(root->right, res);
    //     res.push_back(root->val);
    // }
    // vector<int> postorderTraversal(TreeNode *root)
    // {
    //     vector<int> res;
    //     traversal(root, res);
    //     return res;
    // }
};
// @lc code=end
