/*
 * @lc app=leetcode.cn id=1658 lang=cpp
 *
 * [1658] 将 x 减到 0 的最小操作数
 */

// @lc code=start
// 从nums中移除一个最长的子数组，使得剩余元素的和为x
class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int target = accumulate(nums.begin(), nums.end(), 0) - x;
        if (target < 0)
            return -1;
        int left = 0, n = nums.size(), sum = 0, ans = -1;
        for (int right = 0; right < n; right++)
        {
            sum += nums[right];
            while (sum > target)
            {
                sum -= nums[left++];
            }
            if (sum == target)
                ans = max(ans, right - left + 1);
        }
        return ans < 0 ? -1 : n - ans;
    }
};
// @lc code=end
