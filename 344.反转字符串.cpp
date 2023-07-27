/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int low = 0, fast = s.size() - 1;
        char temp;
        while (low < fast)
        {
            temp = s[low];
            s[low] = s[fast];
            s[fast] = temp;
            low++;
            fast--;
        }
    }
};
// @lc code=end
