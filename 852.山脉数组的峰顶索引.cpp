/*
 * @lc app=leetcode.cn id=852 lang=cpp
 *
 * [852] 山脉数组的峰顶索引
 */

// @lc code=start
// class Solution
// {
// public:
//     int peakIndexInMountainArray(vector<int> &arr)
//     {
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])
//                 return i + 1;
//         }
//         return 0;
//     }
// };
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int left = 0, right = arr.size() - 1, mid;
        while (left < right)
        {
            mid = left + (right - left) / 2;
            if (arr[mid] > arr[mid + 1])
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};
// @lc code=end
