/*
 * @lc app=leetcode.cn id=435 lang=cpp
 *
 * [435] 无重叠区间
 */

// @lc code=start
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty())
            return 0;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[1]<b[1];
        });
        int res = 0, pre = intervals[0][1];
        for(int i = 1 ; i < n ;i++){
            if(pre>intervals[i][0]){
                res++;
                continue;
            }
            else
                pre = intervals[i][1];
        }
        return res;
    }
};
// @lc code=end

