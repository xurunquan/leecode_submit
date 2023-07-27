/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> path;
    void backTracker(int n, int k, int startIndex)
    {
        // 终止条件
        if (path.size() == k)
        {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i <= n; i++)
        {
            path.push_back(i);
            backTracker(n, k, i + 1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        backTracker(n, k, 1);
        return result;
    }
};
// @lc code=end
