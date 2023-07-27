/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start
class Solution
{
public:
    string minWindow(string s, string t)
    {
        unordered_map<char, int> needs, windows;
        for (char c : t)
            needs[c]++;
        int left = 0, right = 0;
        int valida = 0;
        int start = 0, len = __INT_MAX__;
        while (right < s.size())
        {
            char c = s[right];
            right++;
            if (needs.count(c))
            {
                windows[c]++;
                if (windows[c] == needs[c])
                    valida++;
            }
            while (valida == needs.size())
            {
                if (right - left < len)
                {
                    start = left;
                    len = right - left;
                }
                char d = s[left];
                left++;
                if (needs.count(d))
                {
                    if (windows[d] == needs[d])
                        valida--;
                    windows[d]--;
                }
            }
        }
        return len == __INT_MAX__ ? "" : s.substr(start, len);
    }
};
// @lc code=end
