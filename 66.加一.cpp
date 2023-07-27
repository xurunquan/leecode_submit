/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int length = digits.size() - 1, index;
        for (int i = length; i >= 0; i--)
        {
            digits[i]++;
            digits[i] %= 10;
            if (digits[i] != 0)
                return digits;
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
// class Solution
// {
// public:
//     vector<int> plusOne(vector<int> &digits)
//     {
//         int length = digits.size() - 1, index;
//         if (digits[length] != 9)
//             digits[length]++;
//         else
//         {
//             for (int i = length; i > 0; i--)
//             {
//                 if (digits[i] != 9)
//                 {
//                     index = i;
//                     break;
//                 }
//                 digits[i] = 0;
//             }
//             digits[index]++;
//             digits[index] %= 10;
//             if (digits[index] == 0)
//             {
//                 digits[index]++;
//                 digits.push_back(0);
//             }
//         }
//         return digits;
//     }
// };
// @lc code=end
