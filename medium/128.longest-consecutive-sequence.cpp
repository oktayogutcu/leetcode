/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset;

        if(!nums.size())
            return 0;

        for(int i = 0; i < nums.size(); i++){
            uset.insert(nums[i]);
        }

        int temp, longest = 1, length = 1;
        for (auto it = uset.begin(); it != uset.end(); ++it) {
            if(uset.find(*it - 1) == uset.end()){
                temp = *it;
                length = 1;
                
                while(uset.find(temp + 1) != uset.end()){
                    length++;
                    temp++;
                }

                if(longest < length)
                    longest = length;
                
            }
        }
        return longest;
    }
};
// @lc code=end

