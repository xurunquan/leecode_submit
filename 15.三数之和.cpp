/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int x = nums[i];
            if (i && x == nums[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k)
            {
                sum = x + nums[j] + nums[k];
                if (sum > 0)
                    k--;
                else if (sum < 0)
                    j++;
                else
                {
                    res.push_back({x, nums[j], nums[k]});
                    j++;
                    while (j < k && nums[j] == nums[j - 1])
                        // 此处已经将前面位置的添加了，所以使用到j-1，而不是j+1
                        j++;
                    k--;
                    while (k > j && nums[k] == nums[k + 1])
                        // 与j同理
                        k--;
                }
            }
        }
        return res;
    }
};
// @lc code=end
