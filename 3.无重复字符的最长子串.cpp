/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0, n = s.size(), ans = 0;
        unordered_map<char, int> res;
        for (int right = 0; right < n; right++)
        {
            res[s[right]]++;
            while (res[s[right]] > 1)
                --res[s[left++]];
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
// @lc code=end
