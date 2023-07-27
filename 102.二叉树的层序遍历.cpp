/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == nullptr)
            return {};
        queue<TreeNode *> ans;
        vector<vector<int>> res;
        ans.push(root);
        while (!ans.empty())
        {
            vector<int> vals;
            for (int i = ans.size(); i--;)
            {
                auto node = ans.front();
                ans.pop();
                vals.push_back(node->val);
                if (node->left)
                    ans.push(node->left);
                if (node->right)
                    ans.push(node->right);
            }
            res.push_back(vals);
        }
        return res;
    }
};
// @lc code=end
