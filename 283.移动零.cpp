/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int low = 0, fast = 0;
        while (fast < nums.size())
        {
            if (nums[fast] != 0)
            {
                nums[low] = nums[fast];
                low++;
            }
            fast++;
        }
        for (int i = low; i < nums.size(); i++)
            nums[i] = 0;
    }
};
// @lc code=end
