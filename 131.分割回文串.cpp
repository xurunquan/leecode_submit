/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> result;
    vector<string> path;
    bool ispalindrome(string s, int start, int end)
    {
        for (int i = start, j = end; i < j; i++, j--)
            if (s[i] != s[j])
                return false;
        return true;
    }
    void backTracking(string s, int position)
    {
        if (position == s.size())
        {
            result.push_back(path);
            return;
        }
        for (int i = position; i < s.size(); i++)
        {
            if (ispalindrome(s, position, i))
            {
                string str = s.substr(position, i - position + 1);
                path.push_back(str);
            }
            else
                continue;
            backTracking(s, i + 1);
            path.pop_back();
        }
    }
    vector<vector<string>> partition(string s)
    {
        backTracking(s, 0);
        return result;
    }
};
// @lc code=end
