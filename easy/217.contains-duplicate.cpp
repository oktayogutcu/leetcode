/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uset;

        for(int i = 0; i < nums.size(); i++){
            if(uset.find(nums[i]) != uset.end())
                return true;
            else
                uset.insert(nums[i]);
        }

        return false;
    }
};
// @lc code=end

