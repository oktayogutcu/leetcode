/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,string> umap;

        for(int i = 0; i < nums.size(); i++){
            if(umap[nums[i]] == "EXISTS")
                return true;
            else
                umap[nums[i]] = "EXISTS";
        }

        return false;
    }
};
// @lc code=end

