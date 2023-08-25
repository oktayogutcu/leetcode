/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        bool comparison = false;
        int result = -1;
        for(int i = 0; i < haystack.size(); i++){
            for(int j = 0; j < needle.size(); j++){
                if(haystack[i + j] != needle[j]){
                    comparison = false;
                    break;
                }
                else{
                    comparison = true;
                }
            }
            if(comparison){
                result = i;
                break;
            }
        }
        return result;
    }
};
// @lc code=end

