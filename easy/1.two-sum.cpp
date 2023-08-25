/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> returnArr;
        for(i = 0; i < nums.size(); i++){
            for(j = i + 1; j < nums.size(); j++){
                if(target == (nums[i] + nums[j])){
                    //gotos are appropriate for jumping out of nested loops.
                    goto endOfNestedLoops;

                }
            }
        }
        endOfNestedLoops:

        returnArr.push_back(i);
        returnArr.push_back(j);

        return {returnArr};
    }
};
// @lc code=end

