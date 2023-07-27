/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int y = matrix.size(), x = matrix[0].size();
        vector<vector<int>> res(x, vector<int>(y));
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
            {
                res[i][j] = matrix[j][i];
            }
        return res;
    }
};
// @lc code=end
