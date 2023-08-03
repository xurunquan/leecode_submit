/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 */

// @lc code=start
class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        vector<int> dp(100002, 0);
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if (sum % 2 == 1)
            return false;
        int target = sum / 2;
        for (int i = 0; i < nums.size(); i++)
            for (int j = target; j >= nums[i]; j--)
            {
                dp[j] = max(dp[j], dp[j z- nums[i]] + nums[i]);
            }
        return dp[target] == target;
    }
};
// @lc code=end
