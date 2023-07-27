/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size(),res=n;
        for(int i =0;i<s;){
            if(flowerbed[i]==1){
                i+=2;
            }
            else if(i==s-1||flowerbed[i+1]==0){
                res--;
                i+=2;
            }
            else
                i+=3;
        }
        return res<=0;
    }
};
// @lc code=end

