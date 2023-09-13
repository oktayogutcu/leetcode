/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {

        int temp = x, rdr = 0;
        long res = 0; 
        while(temp != 0){
            rdr = temp%10;
            res = res*10 + rdr;
            temp /=10;
        }
        if(res > INT_MAX || res < INT_MIN) return 0;

        return int(res);
    }
};
// @lc code=end

