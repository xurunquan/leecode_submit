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
    void backTracking(vector<int> &candidates, vector<bool> &used, int startindex, int sum, int targetsum)
    {
        if (sum == targetsum)
        {
            result.push_back(path);
            return;
        }
        // 此题必须做剪枝操作，否则时间会超出限制！！！！！
        for (int i = startindex; i < candidates.size() && sum + candidates[i] <= targetsum; i++)
        {
            if (i > 0 && candidates[i] == candidates[i - 1] && used[i - 1] == false)
                continue;
            sum += candidates[i];
            path.push_back(candidates[i]);
            used[i] = true;
            backTracking(candidates, used, i + 1, sum, targetsum);
            used[i] = false;
            sum -= candidates[i];
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<bool> used(candidates.size(), false);
        sort(candidates.begin(), candidates.end());
        backTracking(candidates, used, 0, 0, target);
        return result;
    }
};
// @lc code=end
