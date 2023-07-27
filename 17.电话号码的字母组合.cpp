/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution
{
public:
    vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    string path;
    void backTracking(string digits, int index)
    {
        if (path.size() == digits.size())
        {
            result.push_back(path);
            return;
        }
        int digit = digits[index] - '0';
        string s = map[digit];
        // cout << s << endl;
        for (int i = 0; i < s.size(); i++)
        {
            path.push_back(s[i]);
            backTracking(digits, index + 1);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return result; // result初始化为空
        backTracking(digits, 0);
        return result;
    }
    // vector<string> letterCombinations(string digits)
    // {
    //     int n = digits.size();
    //     if (!n)
    //         return {};
    //     vector<string> ans;
    //     string path(n, 0);
    //     function<void(int)> dfs = [&](int i)
    //     {
    //         if (i == n)
    //         {
    //             ans.push_back(path);
    //             return;
    //         }
    //         for (char c : map[digits[i] - '0'])
    //         {
    //             path[i] = c;
    //             dfs(i + 1);
    //         }
    //     };
    //     dfs(0);
    //     return ans;
    // }
};
// @lc code=end
