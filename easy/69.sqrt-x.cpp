/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        
        //Babylonian square-root algorithm
        
        if (x < 2) {
            return x;
        }

        double xGuess = x/2, xPrev = 0;

        while(abs(xGuess-xPrev) > 0.0001){
            xPrev = xGuess;
            xGuess = (xPrev + x/xPrev)/2;
        }

        return (int)xGuess;
    }
};
// @lc code=end

