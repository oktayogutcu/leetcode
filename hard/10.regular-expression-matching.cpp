/*
 * @lc app=leetcode id=10 lang=cpp
 *
 * [10] Regular Expression Matching
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> dp_table(s.length() + 1, vector<bool>(p.length() + 1));
        dp_table[0][0] = true;

        for(int i = 2; i < p.length() + 1; i++){
            if(p[i - 1] == '*'){
                dp_table[0][i] = dp_table[0][i-2];
            }
        }

        for(int i = 1; i < s.length() + 1; i++){
            for(int j = 1; j < p.length() + 1; j++){
                
                if(s[i - 1] == p[j - 1] || p[j - 1] == '.'){
                    dp_table[i][j] = dp_table[i - 1][j - 1];
                }
                else if(p[j - 1] == '*'){
                    dp_table[i][j] = dp_table[i][j - 2];
                    if(s[i - 1] == p[j - 2] || p[j - 2] == '.'){
                        dp_table[i][j] = dp_table[i][j] | dp_table[i - 1][j];
                    }
                }
                else{
                    dp_table[i][j] = false; 
                }
       
            }
        }
        return dp_table[s.length()][p.length()];
    }
};
// @lc code=end

