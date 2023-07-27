/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int left = 0, n = nums.size(), sum = 0, res = n + 1;
        for (int right = 0; right < n; ++right)
        {
            sum += nums[right];
            while (sum >= target)
            {
                res = min(res, right - left + 1);
                sum -= nums[left++];
            }
        }
        return res <= n ? res : 0;
    }
};
// @lc code=end
