/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, nk = 0;
        for(i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                nk++;
            }
            else{
                nums[i - nk] = nums[i];
            }
        }
        return nums.size() - nk;
    }
};
// @lc code=end

