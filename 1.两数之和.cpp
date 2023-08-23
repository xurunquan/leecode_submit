/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> res;
        for (int j = 0;; j++)
        {
            auto it = res.find(target - nums[j]);
            if (it != res.end())
                return {it->second, j};
            res[nums[j]] = j;
        }
        return {};
    }
};
// @lc code=end
