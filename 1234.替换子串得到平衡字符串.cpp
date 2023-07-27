/*
 * @lc app=leetcode.cn id=1234 lang=cpp
 *
 * [1234] 替换子串得到平衡字符串
 */

// @lc code=start
class Solution
{
public:
    int balancedString(string s)
    {
        int left = 0, n = s.size(), m = n / 4, cnt['x']{};
        for (char c : s)
            cnt[c]++;
        if (cnt['Q'] == m && cnt['W'] == m && cnt['E'] == m && cnt['R'] == m)
            return 0;
        int ans = n;
        for (int right = 0; right < n; right++)
        {
            cnt[s[right]]--;
            while (cnt['Q'] <= m && cnt['W'] <= m && cnt['E'] <= m && cnt['R'] <= m)
            {
                ans = min(ans, right - left + 1);
                ++cnt[s[left++]];
            }
        }
        return ans;
    }
};
// @lc code=end
