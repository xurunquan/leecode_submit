/*
 * @lc app=leetcode.cn id=2586 lang=cpp
 *
 * [2586] 统计范围内的元音字符串数
 */

// @lc code=start
class Solution
{
public:
    int vowelStrings(vector<string> &words, int left, int right)
    {
        vector<char> ws = {'a', 'e', 'i', 'o', 'u'};
        int count = 0;
        for (int i = left; i <= right; i++)
        {
            if ((find(ws.begin(), ws.end(), words[i][0]) != ws.end()) && (find(ws.begin(), ws.end(), words[i][words[i].length() - 1]) != ws.end()))
            {
                cout << words[i] << endl;
                count++;
            }
        }
        return count;
    }
};
// @lc code=end
