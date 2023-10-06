/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> grouped;
        
        int i, j, k;
        for( i = 0; i < strs.size(); i++){
            string tempSorted = strs[i]; 
            sort(tempSorted.begin(), tempSorted.end()); 
            umap[tempSorted].push_back(strs[i]);
        }

        for (auto it = umap.begin(); it != umap.end(); ++it) {
            grouped.push_back(it->second);
        }

        return grouped; 
    }
};
// @lc code=end

