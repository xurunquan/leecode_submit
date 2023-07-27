/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            for (int i = 0; i < j; i++)
                if (nums[i] == nums[j])
                    count += 1;
        }
        return count;
    }
};
// @lc code=end
