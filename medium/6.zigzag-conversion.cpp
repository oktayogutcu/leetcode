/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        int i = 0,j = 0, zzRow = 0;
        string ans = "";
        vector<string> sZigzag(numRows, "");
        bool zzDirection = true;
        if(numRows == 1) return s;
        for(i = 0; i < s.size(); i++){
            // cout << s[i] << zzRow << i << endl;

            sZigzag[zzRow].push_back(s[i]);
            
            if(zzRow == 0) zzDirection = true;
            
            else if(zzRow == numRows - 1) zzDirection = false;
            
            if(zzDirection){
                zzRow++;
            }
            else{
                zzRow--;
            }

        }
        for(i = 0; i < sZigzag.size(); i++){
            ans += sZigzag[i];
        }
        return ans;
    }
};
// @lc code=end

