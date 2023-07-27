/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */

// @lc code=start
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        int arr[27] = {0};
        vector<int> res;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'a'] = i;
        }
        int left = 0, right = 0;
        for (int i = 0; i < n; i++)
        {
            right = max(right, arr[s[i] - 'a']);
            if (right == i)
            {
                res.push_back(right - left + 1);
                left = right + 1;
            }
        }
        return res;
    }
};
// @lc code=end
