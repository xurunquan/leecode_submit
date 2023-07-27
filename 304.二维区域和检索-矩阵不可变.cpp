/*
 * @lc app=leetcode.cn id=304 lang=cpp
 *
 * [304] 二维区域和检索 - 矩阵不可变
 */

// @lc code=start
class NumMatrix
{
private:
    vector<vector<int>> presum;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        int y = matrix.size(), x = matrix[0].size();
        if (x == 0 || y == 0)
            return;
        presum = vector<vector<int>>(y + 1, vector<int>(x + 1));
        for (int i = 1; i <= y; i++)
            for (int j = 1; j <= x; j++)
            {
                presum[i][j] = presum[i - 1][j] + presum[i][j - 1] + matrix[i - 1][j - 1] - presum[i - 1][j - 1];
            }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        return presum[row2 + 1][col2 + 1] - presum[row1][col2 + 1] - presum[row2 + 1][col1] + presum[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end
