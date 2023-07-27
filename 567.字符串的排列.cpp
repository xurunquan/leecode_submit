/*
 * @lc app=leetcode.cn id=567 lang=cpp
 *
 * [567] 字符串的排列
 */

// @lc code=start
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        unordered_map<char, int> needs, windows;
        for (char c : s1)
            needs[c]++;
        int left = 0, right = 0;
        int valida = 0;
        while (right < s2.size())
        {
            char c = s2[right];
            right++;
            if (needs.count(c))
            {
                windows[c]++;
                if (windows[c] == needs[c])
                    valida++;
            }

            while (right - left >= s1.size())
            {
                if (valida == needs.size())
                    return true;
                char d = s2[left];
                left++;
                if (needs.count(d))
                {
                    if (windows[d] == needs[d])
                        valida--;
                    windows[d]--;
                }
            }
        }
        return false;
    }
};
// @lc code=end
