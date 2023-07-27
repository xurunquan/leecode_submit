/*
 * @lc app=leetcode.cn id=1281 lang=cpp
 *
 * [1281] 整数的各位积和之差
 */

// @lc code=start
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int mul = 1, sum = 0;
        while (n > 0)
        {
            mul *= n % 10;
            sum += n % 10;
            n /= 10;
        }
        return mul - sum;
    }
};
// @lc code=end
