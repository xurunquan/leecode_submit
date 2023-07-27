/*
 * @lc app=leetcode.cn id=1004 lang=cpp
 *
 * [1004] 最大连续1的个数 III
 */

// @lc code=start
class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int left = 0, n = nums.size(), cnt = 0, ans = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            cnt++;
            if (nums[right] == 0)
                k--;
            while (k < 0)
            {
                cnt--;
                if (nums[left++] == 0)
                    k++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
// @lc code=end
