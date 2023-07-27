/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int low = 0, hight = numbers.size() - 1;
        while (low < hight)
        {
            int sum = numbers[low] + numbers[hight];
            if (sum == target)
                return {low + 1, hight + 1};
            else if (sum < target)
                low++;
            else
                hight--;
        }
        return {-1, -1};
    }
};
// @lc code=end
