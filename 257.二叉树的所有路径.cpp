/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    void get_result(TreeNode *root, string path, vector<string> &paths)
    {
        if (root != nullptr)
        {
            path += to_string(root->val);
            if (root->left == nullptr && root->right == nullptr)
            {
                paths.push_back(path);
            }
            else
            {
                path += "->";
                get_result(root->left, path, paths);
                get_result(root->right, path, paths);
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> paths;
        get_result(root, "", paths);
        return paths;
    }
};
// @lc code=end
