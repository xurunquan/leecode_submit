/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracking(vector<int> &nums, vector<bool> &used, int startindex)
    {
        result.push_back(path);
        if (startindex > nums.size())
            return;
        for (int i = startindex; i < nums.size(); i++)
        {
            //树层去重 used[i-1] =false
            if (i > 0 && nums[i] == nums[i - 1] && used[i - 1] == false)
                continue;
            path.push_back(nums[i]);
            used[i] = true;
            backTracking(nums, used, i + 1);
            used[i] = false;
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());//涉及去重的都需要进行排序
        backTracking(nums, used, 0);
        return result;
    }
};
// @lc code=end
