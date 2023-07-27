/*
 * @lc app=leetcode.cn id=135 lang=cpp
 *
 * [135] 分发糖果
 */

// @lc code=start
class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        vector<int> ans(n, 1);
        for (int i = 0; i < n - 1; i++)
        {
            if (ratings[i] < ratings[i + 1])
                ans[i + 1] = ans[i] + 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1] && ans[i] <= ans[i + 1])
                ans[i] = ans[i + 1] + 1;
        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};
// @lc code=end
