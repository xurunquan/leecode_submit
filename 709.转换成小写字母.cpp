/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
class Solution
{
public:
    string toLowerCase(string s)
    {
        for (char &i : s)
            if (i >= 65 && i <= 90)
                i |= 32;
        return s;
    }
};
// @lc code=end
