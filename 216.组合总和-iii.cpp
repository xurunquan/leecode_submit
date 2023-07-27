/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracking(int sum, int k, int targesum, int startindex)
    {
        if (sum == targesum && path.size() == k)
        {
            result.push_back(path);
            return;
        }
        for (int i = startindex; i < 10; i++)
        {
            sum += i;
            path.push_back(i);
            if (sum > targesum)
            {
                sum -= i;
                path.pop_back();
                return;
            }
            backTracking(sum, k, targesum, i + 1);
            sum -= i;
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        backTracking(0, k, n, 1);
        return result;
    }
};
// @lc code=end
