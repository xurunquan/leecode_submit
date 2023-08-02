/*
 * @lc app=leetcode.cn id=494 lang=cpp
 *
 * [494] 目标和
 */

// @lc code=start
class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (abs(target) > sum)
            return 0;
        if ((target + sum) % 2 == 1)
            return 0;
        int bagsize = (target + sum) / 2;
        vector<int> dp(bagsize + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < nums.size(); i++)
            for (int j = bagsize; j >= nums[i]; j--)
                dp[j] += dp[j - nums[i]];
        return dp[bagsize];
    }
};
// @lc code=end
