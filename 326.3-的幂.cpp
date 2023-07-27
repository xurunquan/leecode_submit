/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3 的幂
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        double result = n;
        while (result >= 3)
        {
            result /= 3;
        }
        if (result == 1.0)
            return true;
        else
            return false;
    }
};
// @lc code=end
