/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanChars2int(char s)
    {   
        if (s == 'I') return 1;
        else if (s == 'V') return 5;
        else if (s == 'X') return 10;
        else if (s == 'L') return 50;
        else if (s == 'C') return 100;
        else if (s == 'D') return 500;
        else if (s == 'M') return 1000;
        else return 0;
    };
    int romanToInt(string s) {
        int result = 0;
        for(int i = 0; i < s.length(); i++){
            if((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            || (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            || (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))){
                result -= romanChars2int(s[i]);
                // cout << s[i];
            }
            else{
                result += romanChars2int(s[i]);
            }
            
        }
        return result;
    }
};
// @lc code=end

