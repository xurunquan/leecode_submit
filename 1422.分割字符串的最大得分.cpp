/*
 * @lc app=leetcode.cn id=1422 lang=cpp
 *
 * [1422] 分割字符串的最大得分
 */

// @lc code=start
// class Solution
// {
// public:
//     int maxScore(string s)
//     {
//         vector<int> result;
//         int score;
//         for (int i = 1; i < s.size(); i++)
//         {
//             score = 0;
//             for (int j = 0; j < i; j++)
//                 if (s[j] == '0')
//                     score++;
//             for (int k = i; k < s.size(); k++)
//                 if (s[k] == '1')
//                     score++;
//             result.push_back(score);
//         }
//         return *max_element(result.begin(), result.end());
//     }
// };
class Solution
{
public:
    int maxScore(string s)
    {
        int score = 0;
        if (s[0] == '0')
            score++;
        for (int i = 1; i < s.size(); i++)
            if (s[i] == '1')
                score++;
        int ans = score;
        for (int j = 1; j < s.size() - 1; j++)
        {
            if (s[j] == '0')
                score++;
            if (s[j] == '1')
                score--;

            ans = max(ans, score);
        }
        return ans;
    }
};
// @lc code=end
