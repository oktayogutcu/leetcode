/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        string s_temp = "", s_return = "";
        bool isPalindromeStarted = false;
        int palInd = 0, reversePalindromeStartIndex = 0, maxPalSize = 0, i, j;

        for(i = 0; i < s.length(); i++){
            // cout << "new char: " << s[i] << endl;
            isPalindromeStarted = false;
            palInd = 0;
            for(j = s.length() - 1; j >= i + palInd; j--){

                // cout << " pal char " << s[j] << " " << j << endl;
                
                if(s[i] == s[j] && !isPalindromeStarted){
                    isPalindromeStarted = true;
                    reversePalindromeStartIndex = j;
                    // cout << "reverse track started at: " << j << endl;
                }

                if(isPalindromeStarted){
                    if(s[i + palInd] == s[j]){
                        // cout << "succes: " << s[i + palInd] << " - "<< s[j] << " - " << i + palInd << j << endl;
                        palInd++;
                    }
                    else{
                        j = reversePalindromeStartIndex;
                        isPalindromeStarted = false;
                        palInd = 0;
                    }
                }

            }
            if(isPalindromeStarted){
                if(maxPalSize < (reversePalindromeStartIndex + 1 - i)){
                    maxPalSize = (reversePalindromeStartIndex + 1 - i) ;
                    s_temp = s.substr(i, reversePalindromeStartIndex + 1 -i);
                    // cout << "size: " << maxPalSize << " string: " << s_temp << endl;
                    
                }
            }
        }
        s_return = s_temp;
        return s_return;
    }
};
// @lc code=end

