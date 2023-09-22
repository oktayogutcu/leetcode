/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, i = (s.length() - 1);
        bool finish = false;
        while(!finish){
            
            if(s[i] != ' ')
                ans++;

            if(i == 0 || (ans > 0 && s[i] == ' ')){
                finish = true;
            }
            
            i--;
        }
        return ans;
    }
};
// @lc code=end

