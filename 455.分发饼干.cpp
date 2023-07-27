/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int k = 0, c = 0;
        while (k < g.size() && c < s.size())
        {
            if (g[k] <= s[c])
                k++;
            c++;
        }
        return k;
    }
};
// @lc code=end
