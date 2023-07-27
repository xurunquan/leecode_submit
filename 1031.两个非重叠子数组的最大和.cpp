/*
 * @lc app=leetcode.cn id=1031 lang=cpp
 *
 * [1031] 两个非重叠子数组的最大和
 */

// @lc code=start
class Solution
{
public:
    int maxSumTwoNoOverlap(vector<int> &nums, int firstLen, int secondLen)
    {
        int f_max = 0, s_max = 0, max_findex;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + firstLen < nums.size())
            {
                int max = 0;
                for (int j = i; j < firstLen + i; j++)
                {
                    max += nums[j];
                    // cout << nums[j] << endl;
                }
                if (f_max < max)
                {
                    f_max = max;
                    max_findex = i;
                }
            }
            // cout << max_findex << endl;
        }
        for (int i = 0; i <= nums.size(); i++)
        {
            cout << "i:" << i << endl;
            cout << "i + secondLen:" << i + secondLen << endl;
            cout << "max_findex + firstLen:" << max_findex + firstLen << endl;
            if ((i + secondLen < max_findex || i >= max_findex + firstLen) && i + secondLen <= nums.size())
            {
                int max = 0;
                // cout << i << endl;
                for (int k = i; k <= secondLen + i; k++)
                {
                    // cout << k << endl;
                    max += nums[k];
                    if (k == max_findex)
                        max = 0;
                }
                // cout << max << endl;
                // cout << i << endl;
                if (s_max < max)
                    s_max = max;
            }
        }
        // cout << f_max << s_max << endl;
        return f_max + s_max;
    }
};
// @lc code=end
