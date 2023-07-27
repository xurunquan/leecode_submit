/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        return {leftSearch(nums, target), rightSearch(nums, target)};
    }

    int leftSearch(vector<int> &nums, int target)
    {
        int mid, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] >= target)
                right = mid - 1;
            else if (nums[mid] < target)
                left = mid + 1;
        }
        if (left >= nums.size() || nums[left] != target)
            return -1;
        return left;
    }

    int rightSearch(vector<int> &nums, int target)
    {
        int mid, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] <= target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        if (right < 0 || nums[right] != target)
            return -1;
        return right;
    }
};
// @lc code=end
