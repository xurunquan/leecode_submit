/*
 * @lc app=leetcode.cn id=1109 lang=cpp
 *
 * [1109] 航班预订统计
 */

// @lc code=start
class Difference
{
private:
    vector<int> diff;

public:
    Difference(vector<int> nums)
    {
        assert(nums.size() > 0);
        diff = vector<int>(nums.size());
        diff[0] = nums[0];
        for (int i = 1; i < diff.size(); i++)
            diff[i] = nums[i] - nums[i - 1];
    }

    void increase(int i, int j, int val)
    {
        diff[i] += val;
        if (j + 1 < diff.size())
        {
            diff[j + 1] -= val;
        }
    }

    vector<int> result()
    {
        vector<int> result(diff.size());
        result[0] = diff[0];
        for (int i = 1; i < result.size(); i++)
            result[i] = diff[i] + result[i - 1];
        return result;
    }
};
class Solution
{
public:
    vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
    {
        vector<int> nums(n);
        Difference diff(nums);
        for (auto booking : bookings)
        {
            int i = booking[0] - 1;
            int j = booking[1] - 1;
            int val = booking[2];
            diff.increase(i, j, val);
        }
        return diff.result();
    }
};
// @lc code=end
