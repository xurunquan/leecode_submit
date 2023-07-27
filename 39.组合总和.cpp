/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    int sum = 0;
    void backTracking(int sum, int targesum, int startindex, vector<int> candidates)
    {
        if (sum > targesum)
            return;
        if (sum == targesum)
        {
            result.push_back(path);
            return;
        }
        for (int i = startindex; i < candidates.size(); i++)
        {
            sum += candidates[i];
            path.push_back(candidates[i]);
            backTracking(sum, targesum, i, candidates);
            sum -= candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        backTracking(0, target, 0, candidates);
        return result;
    }
};
// @lc code=end
