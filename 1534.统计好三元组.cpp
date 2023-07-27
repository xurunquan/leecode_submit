/*
 * @lc app=leetcode.cn id=1534 lang=cpp
 *
 * [1534] 统计好三元组
 */

// @lc code=start
class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int count = 0;
        for (int k = 2; k < arr.size(); k++)
            for (int j = 1; j < k; j++)
                for (int i = 0; i < j; i++)
                {
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        count++;
                }
        return count;
    }
};
// @lc code=end
