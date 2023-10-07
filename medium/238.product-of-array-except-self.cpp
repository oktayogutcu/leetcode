/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 1);
        vector<int> prefix(len, 1);
        vector<int> suffix(len, 1);

        prefix[0] = nums[0];
        suffix[len-1] = nums[len-1];

        int i = 1, j = len - 2;
        while(i < len){
            prefix[i] = nums[i] * prefix[i - 1];
            suffix[j] = nums[j] * suffix[j + 1];

            i++;
            j--;
        }

        ans[0] = suffix[1];
        ans[len-1] = prefix[len - 2];
        for(int i = 1; i < len - 1; i++){
            ans[i] = prefix[i-1] * suffix[i+1];
        }

        return ans;
    }
};
// @lc code=end

