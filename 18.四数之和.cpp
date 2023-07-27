/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 鍥涙暟涔嬪拰
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        if (n < 4)
            return res;
        for (int i = 0; i < n - 3; i++)
        {
            int x = nums[i];
            if (i && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; j++)
            {
                int y = nums[j];
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int k = j + 1;
                int z = n - 1;
                while (k < z)
                {
                    long sum = (long)x + y + nums[k] + nums[z];
                    // 注意越界处理！！！ long long int 的写法！！！！
                    if (sum > target)
                    {
                        z--;
                    }
                    else if (sum < target)
                    {
                        k++;
                    }
                    else
                    {
                        res.push_back({x, y, nums[k], nums[z]});
                        k++;
                        while (k < z && nums[k] == nums[k - 1])
                            k++;
                        z--;
                        while (z > k && nums[z] == nums[z + 1])
                            z--;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end
