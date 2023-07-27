/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    int sum = 0;
    void backTracking(vector<int> candidates, int sum, int targesum, int startindex)
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
            if (i > startindex && candidates[i] == candidates[i - 1])
                continue;
            sum += candidates[i];
            path.push_back(candidates[i]);
            backTracking(candidates, sum, targesum, i + 1);
            sum -= candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        backTracking(candidates, 0, target, 0);
        return result;
    }
};
// @lc code=end
