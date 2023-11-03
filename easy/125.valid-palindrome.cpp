/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        bool isAlphaNumericF = false, isAlphaNumericB = false;

        while(i < j){
            //alpha numerical check by comparing decimal values of chars in the ascii table
            isAlphaNumericF = (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57) ? true:false;
            isAlphaNumericB = (s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122) || (s[j] >= 48 && s[j] <= 57) ? true:false;

            if(isAlphaNumericF && isAlphaNumericB){
                // if char is not a number (s > 65) and one's decimal number is higher 32, it means one is upper letter. 
                if(!(s[i] == s[j] || (s[i] >= 65 && s[i] >= 65 && abs(s[i] -  s[j]) == 32))) 
                    return false;
                i++;
                j--;
            }
            else if(isAlphaNumericF)
                j--;
            else if(isAlphaNumericB)
                i++;
            else{
                i++;
                j--;
            }

        }
        
        return true;
    }
};
// @lc code=end

