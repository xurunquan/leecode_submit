/*
 * @lc app=leetcode.cn id=713 lang=cpp
 *
 * [713] 乘积小于 K 的子数组
 */

// @lc code=start
class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int left = 0, n = nums.size(), sum = 1, ans = 0;
        for (int right = 0; right < n; right++)
        {
            sum *= nums[right];
            while (sum >= k)
            {
                sum /= nums[left++];
            }
            ans += right - left + 1;
            // 判断以r为右端点的左自串是否符合要求
            // l    r  假设这一段均符合要求
            // [l, r] [l+1, r] ....[r,r]
            // 数组个数其实就是l到r的元素个数
            // r-l+1
        }
        return ans;
    }
};
// @lc code=end
