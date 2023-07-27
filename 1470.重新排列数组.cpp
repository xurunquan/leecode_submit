/*
 * @lc app=leetcode.cn id=1470 lang=cpp
 *
 * [1470] 重新排列数组
 */

// @lc code=start
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> result_v;
        for (int i = 0; i < n; i++)
        {
            result_v.push_back(nums[i]);
            result_v.push_back(nums[i + n]);
        }
        return result_v;
    }
};
// @lc code=end
