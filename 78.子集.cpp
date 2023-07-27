/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracking(vector<int> &nums, int startindex)
    {
        result.push_back(path); // 每一次遍历都会加入代码（所以放在最上边）
        if (startindex > nums.size())
        { // 终止条件
            return;
        }
        for (int i = startindex; i < nums.size(); i++)
        {
            path.push_back(nums[i]);
            backTracking(nums, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        backTracking(nums, 0);
        return result;
    }
};
// @lc code=end
