/*
 * @lc app=leetcode.cn id=2418 lang=cpp
 *
 * [2418] 按身高排序
 */

// @lc code=start
class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> result;
        int index;
        for (int i = 0; i < names.size(); i++)
        {
            index = max_element(heights.begin(), heights.end()) - heights.begin();
            result.push_back(names[index]);
            heights[index] = 0;
        }
        return result;
    }
};
// @lc code=end
