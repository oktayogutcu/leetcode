/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        char temp, startChar;
        int currCount = 0, maxCount = 0, startIndex = 0, currInd = 0, i = 0, j = 0;
        bool repeatOccured = false, isSearchDone = false;

        if(s.size() <= 1) return s.size();

        unordered_map<char, int> umap;


        while(!isSearchDone){

            if(i == s.size() - 1){
                // maxCount = max(currCount,maxCount);
                isSearchDone = true;
            } 

            if(0 == umap.count(s[i]) || umap[s[i]] < j){
                umap[s[i]] = i;
                maxCount = max(i - j + 1, maxCount);
                // cout << i << j << endl;
                // cout << s[i];
            }
            else {
                j = umap[s[i]] + 1;
                umap[s[i]] = i;
            }
            i++;
        }    
        
        return maxCount;
    }
};
// @lc code=end

