/*
 * @lc app=leetcode.cn id=1094 lang=cpp
 *
 * [1094] 拼车
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
        for (int i = 1; i < nums.size(); i++)
            diff[i] = nums[i] - nums[i - 1];
    }
    void increase(int i, int j, int val)
    {
        diff[i] += val;
        if (j + 1 < diff.size())
            diff[j + 1] -= val;
    }
    vector<int> result()
    {
        vector<int> res(diff.size());
        res[0] = diff[0];
        for (int i = 1; i < res.size(); i++)
            res[i] = diff[i] + res[i - 1];
        return res;
    }
};
class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        vector<int> nums(1001);
        Difference diff(nums);
        for (auto trip : trips)
        {
            int val = trip[0];
            int i = trip[1];
            int j = trip[2] - 1;
            diff.increase(i, j, val);
        }
        vector<int> result = diff.result();
        for (int i = 0; i < result.size(); i++)
            if (capacity < result[i])
                return false;
        return true;
    }
};
// @lc code=end
