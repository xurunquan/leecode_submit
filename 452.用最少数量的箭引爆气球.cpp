/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())
            return 0;
        int n = points.size(),res=1;
        sort(points.begin(), points.end(), [](vector<int>&a, vector<int>&b){
            return a[0]<b[0];
        });
        int pre = points[0][1];
        for(int i = 1; i < n; i++){
            if(pre<points[i][0]){
                res++;
                pre = points[i][1];
            }
            // if(i==n-1&&points[i][0]<pre)
            //     res--;
        }
        return res;
    }
};
// @lc code=end

