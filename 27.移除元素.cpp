/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int low = 0, fast = 0;
        while (fast < nums.size())
        {
            if (nums[fast] != val)
            {
                nums[low] = nums[fast];
                low++;
            }
            fast++;
        }
        return low;
    }
};
// @lc code=end
