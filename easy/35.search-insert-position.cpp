/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {

        int l = 0, r = nums.size();
        
        if(target > nums[r-1]){
            return r;
        }

        while (l <= r) {

            int m = (r + l) / 2;
    
            // Check if x is present at mid
            if (nums[m] == target)
                return m;
    
            //update left or right indexes by comparing 
            //target with middle number
            if (nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }

        return l;
    }
};
// @lc code=end

