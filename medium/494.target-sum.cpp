/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:

struct hash_pair { 
   template <class T1, class T2> 
   size_t operator()(const pair<T1, T2>& p) const
   { 
       auto hash1 = hash<T1>{}(p.first); 
       auto hash2 = hash<T2>{}(p.second); 
       return hash1 ^ hash2; 
   } 
};

int helper(int n, int sum, vector<int>& nums, int target, unordered_map<pair<int, int>, int, hash_pair>& dp_map){
    if(n == 0){
        return target == sum ? 1 : 0;
    }

    pair<int, int> p1 = make_pair(n, sum);
    if(dp_map.find(p1) != dp_map.end()) return dp_map[p1];

    return dp_map[p1] =  helper(n - 1, sum - nums[n - 1], nums, target, dp_map) 
                        + helper(n - 1, sum + nums[n - 1], nums, target, dp_map);
}

int findTargetSumWays(vector<int>& nums, int target) {
    unordered_map<pair<int, int>, int, hash_pair> dp_map;
    return helper(nums.size(), 0, nums, target, dp_map);
}

};
// @lc code=end

