/*
 * @lc app=leetcode.cn id=1749 lang=cpp
 *
 * [1749] 任意子数组和的绝对值的最大值
 */

// @lc code=start
class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int ma = 0, mi = 0;
        int ans = 0;
        for (auto x : nums)
        {
            ma = max(ma, 0) + x;
            mi = min(mi, 0) + x;
            ans = max(ans, max(abs(ma), abs(mi)));
        }
        return ans;
    }
};
// @lc code=end
