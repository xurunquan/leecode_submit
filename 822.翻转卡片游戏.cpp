/*
 * @lc app=leetcode.cn id=822 lang=cpp
 *
 * [822] 翻转卡片游戏
 */

// @lc code=start
class Solution
{
public:
    int flipgame(vector<int> &fronts, vector<int> &backs)
    {
        unordered_set<int> forbidden;
        for (int i = 0; i < fronts.size(); i++)
            if (fronts[i] == backs[i])
                forbidden.insert(fronts[i]);
        int ans = __INT_MAX__;
        for (int x : fronts)
            if (!forbidden.count(x))
                ans = min(ans, x);
        for (int x : backs)
            if (!forbidden.count(x))
                ans = min(ans, x);
        return ans == __INT_MAX__ ? 0 : ans;
    }
};
// @lc code=end
