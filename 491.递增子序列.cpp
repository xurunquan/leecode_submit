/*
 * @lc app=leetcode.cn id=491 lang=cpp
 *
 * [491] 递增子序列
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracking(vector<int> &nums, int startindex)
    {
        if (path.size() > 1)
            result.push_back(path);
        if (startindex > nums.size())
            return;
        unordered_set<int> used; // 在for循环外定义，负责横向的去重
        // 使用哈希集合来去重，实现不需要对数组进行排序的去重
        for (int i = startindex; i < nums.size(); i++)
        {
            //只要当前数比path中的最后一个数小，则该层的数字不能使用
            if ((!path.empty() && nums[i] < path.back()) || used.find(nums[i]) != used.end())
                continue;
            used.insert(nums[i]);
            path.push_back(nums[i]);
            backTracking(nums, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        backTracking(nums, 0);
        return result;
    }
};
// @lc code=end
