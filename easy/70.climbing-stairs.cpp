/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int currVal = 1, prevVal = 1, tempVal = 0;


        if(n == 0 || n == 1)
            return 1;
        
        for(int i = 2; i <= n; i++){
            tempVal = currVal;
            currVal = currVal + prevVal;
            prevVal = tempVal;
        }

        return currVal;

    }
};
// @lc code=end

