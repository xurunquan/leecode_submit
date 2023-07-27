/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 鏈�鎺ヨ繎鐨勪笁鏁颁箣鍜?
 */

// @lc code=start
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int del = 1e7, n = nums.size(), sum = 0; // 注意del的大小
        for (int right = 0; right < n - 2; right++)
        {
            int x = nums[right];
            if (right > 0 && nums[right] == nums[right - 1])
                continue;
            int j = right + 1;
            int k = n - 1;
            while (j < k)
            {
                sum = x + nums[j] + nums[k];
                if (sum == target)
                    return target;
                if (abs(del - target) > abs(sum - target))
                {
                    del = sum;
                }
                if (sum > target)
                {
                    k--;
                    while (k > j && nums[k] == nums[k + 1])
                        k--;
                }
                else
                {
                    j++;
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                }
            }
        }
        return del;
    }
};
// @lc code=end
