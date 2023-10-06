/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;

        if(s.length() != t.length())
            return false;

        for(int i = 0; i < s.length(); i++){
            umap[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            if(umap[t[i]] > 0)
                umap[t[i]]--;
            else
                return false;
        }


        return true;
    }
};
// @lc code=end

