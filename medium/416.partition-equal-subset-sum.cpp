/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */

// @lc code=start
class Solution {
public:

    bool helper(int n, vector<int>&nums, int sum,  vector<vector<int>>& dp){

        if(sum == 0) 
            return true;

        if(n == 0 && sum != 0) 
            return false;

        if(dp[n][sum] != -1) 
            return dp[n][sum];

        if(nums[n-1] > sum){
            return dp[n][sum] = helper(n-1, nums, sum, dp);
        }

        return  dp[n][sum] = helper(n-1, nums, sum - nums[n-1], dp) || 
                helper(n-1, nums, sum, dp);
    }

    int sumVec(vector<int>& nums){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }   
        return sum;
    }

    bool canPartition(vector<int>& nums) {
        int sum = sumVec(nums);
        
        if(sum % 2 != 0) return false;  

        vector<vector<int>> dp(nums.size()+1, vector<int>(sum+1, -1));

        return helper(nums.size(), nums, sum/2, dp);

    }

};
// @lc code=end

